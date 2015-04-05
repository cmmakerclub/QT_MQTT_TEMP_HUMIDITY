#include "mqtt_temp.h"
#include "ui_mqtt_temp.h"
#include <QDebug>
#include <QPixmap>
#include <QString>
#include <QStringList>
#include <QTime>

MQTT_TEMP::MQTT_TEMP(QMQTT::Client *client,QWidget *parent) :
    QMainWindow(parent),
    _client(client),
    ui(new Ui::MQTT_TEMP)
{
    ui->setupUi(this);
    _client->setHost("iot.eclipse.org");
    _client->setPort(1883);
    _client->setKeepAlive(300);
    _client->setCleansess(1);
    _client->connect();


    connect(_client,SIGNAL(connected()),this,SLOT(onMQTT_Connected()));
    connect(_client,SIGNAL(connacked(quint8)),this,SLOT(onMQTT_Connacked(quint8)));
    connect(_client,SIGNAL(subscribed(const QString &)), this, SLOT(onSubscribed(const QString &)));
    connect(_client,SIGNAL(received(const QMQTT::Message &)), this, SLOT(onMQTT_Received(const QMQTT::Message &)));
    connect(_client,SIGNAL(subacked(quint16, quint8)), this, SLOT(onMQTT_subacked(quint16, quint8)));
    QPixmap pic(":/thermometer-42px.png");
    ui->pic1la->setPixmap(pic);
    ui->temp1la->setStyleSheet("QLabel {color:white;font-size:36px;}");
    //ui->templabel->setStyleSheet("QLabel {color:white;font-size:36px}");
    //ui->hudlabel->setStyleSheet("QLabel {color:white;font-size:36px}");
    ui->hud1la->setStyleSheet("QLabel {color:white;font-size:36px}");
    ui->time1la->setStyleSheet("QLabel {color:white;font-size:10px}");
    ui->datela->setStyleSheet("QLabel {color:white;font-size:12px}");
}
MQTT_TEMP::~MQTT_TEMP()
{
    delete ui;
}
void MQTT_TEMP::onMQTT_Received(const QMQTT::Message &message)
{
    QRegExp rx("(\\,)");
    QStringList data2 = (((QString)message.payload()).split(rx));
//    log(tr("message on %1 on port %2 with qos 0 r\n").arg(_client->host()).arg(_client->port()));
//    log(tr("%1").arg(QString(message.payload())));
      ui->temp1la->setText(tr("%1 ᴼC").arg(data2[0]));
      ui->hud1la->setText(tr("%1 %").arg(data2[1]));
      QTime time = QTime::currentTime();
      QDateTime date = QDateTime::currentDateTime();
      QString time_text = time.toString("hh : mm : ss");
      QString date_text = date.toString("dddd : dd : MMM : yyyy");
      ui->time1la->setText(time_text);
      ui->datela->setText(date_text);
    qDebug() << data2[0] << endl;
    qDebug() << data2[1] << endl;
}
void MQTT_TEMP::onMQTT_Connected(){
        qDebug() << "connected";
//        log(tr("Connected to %1 on port %2").arg(_client->host()).arg(_client->port()));
        _client->subscribe("cmmc/Dragon",0);
}
void MQTT_TEMP::onMQTT_Connacked(quint8 ack)
{
    QString ackStatus;
    switch(ack) {
    case QMQTT::CONNACK_ACCEPT:
        ackStatus = "Connection Accepted";
        break;
    case QMQTT::CONNACK_PROTO_VER:
        ackStatus = "Connection Refused: unacceptable protocol version";
        break;
    case QMQTT::CONNACK_INVALID_ID:
        ackStatus = "Connection Refused: identifier rejected";
        break;
    case QMQTT::CONNACK_SERVER:
        ackStatus = "Connection Refused: server unavailable";
        break;
    case QMQTT::CONNACK_CREDENTIALS:
        ackStatus = "Connection Refused: bad user name or password";
        break;
    case QMQTT::CONNACK_AUTH:
        ackStatus = "Connection Refused: not authorized";
        break;
    }
//    log(tr("connacked = %1 : %2").arg(ack).arg(ackStatus));
    qDebug() << "connacked =" << ack << ":" << ackStatus;
}
void MQTT_TEMP::onSubscribed(const QString &topic)
{

    qDebug() << "Subscribed";
    qDebug() << topic;
}

void MQTT_TEMP::onMQTT_subacked(quint16 msgid, quint8 qos)
{
//    log(tr("subacked: msgid=%1, qos=%2").arg(msgid).arg(qos));
    qDebug() << "subacked:" << msgid << ":" << qos;
}

void MQTT_TEMP::log(const QString & msg)
{
   qDebug() << msg << endl;
}


//void MQTT_TEMP::log(const QString & msg)
//{
//    ui->textBrowser->append(msg);
//}
