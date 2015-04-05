#-------------------------------------------------
#
# Project created by QtCreator 2015-01-24T18:24:13
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets



TARGET = MQTT_Temp
target.path = /home/pi
INSTALLS = target
TEMPLATE = app

SOURCES += main.cpp\
        mqtt_temp.cpp

HEADERS  += mqtt_temp.h

FORMS    += mqtt_temp.ui

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../qmqtt/release/ -lqmqtt
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../qmqtt/debug/ -lqmqtt
else:unix: LIBS += -L$$PWD/../qmqtt -lqmqtt

INCLUDEPATH += $$PWD/../qmqtt
DEPENDPATH += $$PWD/../qmqtt
