/****************************************************************************
** Meta object code from reading C++ file 'mqtt_temp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mqtt_temp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mqtt_temp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MQTT_TEMP_t {
    QByteArrayData data[12];
    char stringdata[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MQTT_TEMP_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MQTT_TEMP_t qt_meta_stringdata_MQTT_TEMP = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 16),
QT_MOC_LITERAL(2, 27, 0),
QT_MOC_LITERAL(3, 28, 15),
QT_MOC_LITERAL(4, 44, 14),
QT_MOC_LITERAL(5, 59, 7),
QT_MOC_LITERAL(6, 67, 16),
QT_MOC_LITERAL(7, 84, 12),
QT_MOC_LITERAL(8, 97, 5),
QT_MOC_LITERAL(9, 103, 15),
QT_MOC_LITERAL(10, 119, 5),
QT_MOC_LITERAL(11, 125, 3)
    },
    "MQTT_TEMP\0onMQTT_Connected\0\0onMQTT_Received\0"
    "QMQTT::Message\0message\0onMQTT_Connacked\0"
    "onSubscribed\0topic\0onMQTT_subacked\0"
    "msgid\0qos"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MQTT_TEMP[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    1,   40,    2, 0x08 /* Private */,
       6,    1,   43,    2, 0x08 /* Private */,
       7,    1,   46,    2, 0x08 /* Private */,
       9,    2,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::UChar,    2,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar,   10,   11,

       0        // eod
};

void MQTT_TEMP::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MQTT_TEMP *_t = static_cast<MQTT_TEMP *>(_o);
        switch (_id) {
        case 0: _t->onMQTT_Connected(); break;
        case 1: _t->onMQTT_Received((*reinterpret_cast< const QMQTT::Message(*)>(_a[1]))); break;
        case 2: _t->onMQTT_Connacked((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 3: _t->onSubscribed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->onMQTT_subacked((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject MQTT_TEMP::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MQTT_TEMP.data,
      qt_meta_data_MQTT_TEMP,  qt_static_metacall, 0, 0}
};


const QMetaObject *MQTT_TEMP::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MQTT_TEMP::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MQTT_TEMP.stringdata))
        return static_cast<void*>(const_cast< MQTT_TEMP*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MQTT_TEMP::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
