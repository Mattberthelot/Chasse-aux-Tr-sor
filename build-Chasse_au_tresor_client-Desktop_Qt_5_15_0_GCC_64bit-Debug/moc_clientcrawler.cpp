/****************************************************************************
** Meta object code from reading C++ file 'clientcrawler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Chasse_au_tresor_client/clientcrawler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clientcrawler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ClientCrawler_t {
    QByteArrayData data[13];
    char stringdata0[285];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClientCrawler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClientCrawler_t qt_meta_stringdata_ClientCrawler = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ClientCrawler"
QT_MOC_LITERAL(1, 14, 26), // "on_pushButton_left_clicked"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 24), // "on_pushButton_up_clicked"
QT_MOC_LITERAL(4, 67, 27), // "on_pushButton_Right_clicked"
QT_MOC_LITERAL(5, 95, 26), // "on_pushButton_Down_clicked"
QT_MOC_LITERAL(6, 122, 22), // "onQTcpSocket_readyRead"
QT_MOC_LITERAL(7, 145, 22), // "onQTcpSocket_connected"
QT_MOC_LITERAL(8, 168, 25), // "onQTcpSocket_disconnected"
QT_MOC_LITERAL(9, 194, 18), // "onQTcpSocket_error"
QT_MOC_LITERAL(10, 213, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(11, 242, 11), // "socketError"
QT_MOC_LITERAL(12, 254, 30) // "on_pushButtonConnexion_clicked"

    },
    "ClientCrawler\0on_pushButton_left_clicked\0"
    "\0on_pushButton_up_clicked\0"
    "on_pushButton_Right_clicked\0"
    "on_pushButton_Down_clicked\0"
    "onQTcpSocket_readyRead\0onQTcpSocket_connected\0"
    "onQTcpSocket_disconnected\0onQTcpSocket_error\0"
    "QAbstractSocket::SocketError\0socketError\0"
    "on_pushButtonConnexion_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClientCrawler[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    1,   66,    2, 0x08 /* Private */,
      12,    0,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,

       0        // eod
};

void ClientCrawler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ClientCrawler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_left_clicked(); break;
        case 1: _t->on_pushButton_up_clicked(); break;
        case 2: _t->on_pushButton_Right_clicked(); break;
        case 3: _t->on_pushButton_Down_clicked(); break;
        case 4: _t->onQTcpSocket_readyRead(); break;
        case 5: _t->onQTcpSocket_connected(); break;
        case 6: _t->onQTcpSocket_disconnected(); break;
        case 7: _t->onQTcpSocket_error((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 8: _t->on_pushButtonConnexion_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ClientCrawler::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ClientCrawler.data,
    qt_meta_data_ClientCrawler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ClientCrawler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClientCrawler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ClientCrawler.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ClientCrawler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
