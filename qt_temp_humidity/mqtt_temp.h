#ifndef MQTT_TEMP_H
#define MQTT_TEMP_H

#include <QMainWindow>
#include "qmqtt.h"
#include <QListWidgetItem>
//#include "mqttform.h"

namespace Ui {
class MQTT_TEMP;
}

class MQTT_TEMP : public QMainWindow
{
    Q_OBJECT

public:
    explicit MQTT_TEMP(QMQTT::Client *client,QWidget *parent = 0);
    QMQTT::Client *_client;
//    void init(QMQTT::Client *client);
    ~MQTT_TEMP();

private:
    Ui::MQTT_TEMP *ui;
    QMap<QString,QListWidgetItem *> *topics;
    void log(const QString & msg);
//    QPixmap *pic;

private slots:

//    void onSubscribed(const QString &topic);
    void onMQTT_Connected();
    void onMQTT_Received(const QMQTT::Message &message);
    void onMQTT_Connacked(quint8);
    void onSubscribed(const QString &topic);
    void onMQTT_subacked(quint16 msgid, quint8 qos);
};

#endif // MQTT_TEMP_H
