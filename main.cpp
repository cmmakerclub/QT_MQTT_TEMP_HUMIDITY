#include "mqtt_temp.h"
#include "qmqtt.h"
#include <QApplication>
#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication::setOrganizationName("QMQTT");
    QCoreApplication::setApplicationName("QMQTT");
    QApplication a(argc, argv);
    MQTT_TEMP w(new QMQTT::Client());
    w.show();
    return a.exec();
}
