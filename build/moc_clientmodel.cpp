/****************************************************************************
** Meta object code from reading C++ file 'clientmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/clientmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clientmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ClientModel_t {
    QByteArrayData data[21];
    char stringdata0[219];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClientModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClientModel_t qt_meta_stringdata_ClientModel = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ClientModel"
QT_MOC_LITERAL(1, 12, 21), // "numConnectionsChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 5), // "count"
QT_MOC_LITERAL(4, 41, 16), // "numBlocksChanged"
QT_MOC_LITERAL(5, 58, 12), // "countOfPeers"
QT_MOC_LITERAL(6, 71, 13), // "alertsChanged"
QT_MOC_LITERAL(7, 85, 8), // "warnings"
QT_MOC_LITERAL(8, 94, 13), // "miningChanged"
QT_MOC_LITERAL(9, 108, 6), // "mining"
QT_MOC_LITERAL(10, 115, 5), // "error"
QT_MOC_LITERAL(11, 121, 5), // "title"
QT_MOC_LITERAL(12, 127, 7), // "message"
QT_MOC_LITERAL(13, 135, 5), // "modal"
QT_MOC_LITERAL(14, 141, 5), // "style"
QT_MOC_LITERAL(15, 147, 11), // "updateTimer"
QT_MOC_LITERAL(16, 159, 20), // "updateNumConnections"
QT_MOC_LITERAL(17, 180, 14), // "numConnections"
QT_MOC_LITERAL(18, 195, 11), // "updateAlert"
QT_MOC_LITERAL(19, 207, 4), // "hash"
QT_MOC_LITERAL(20, 212, 6) // "status"

    },
    "ClientModel\0numConnectionsChanged\0\0"
    "count\0numBlocksChanged\0countOfPeers\0"
    "alertsChanged\0warnings\0miningChanged\0"
    "mining\0error\0title\0message\0modal\0style\0"
    "updateTimer\0updateNumConnections\0"
    "numConnections\0updateAlert\0hash\0status"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClientModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    2,   62,    2, 0x06 /* Public */,
       6,    1,   67,    2, 0x06 /* Public */,
       8,    2,   70,    2, 0x06 /* Public */,
      10,    3,   75,    2, 0x06 /* Public */,
      12,    3,   82,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    0,   89,    2, 0x0a /* Public */,
      16,    1,   90,    2, 0x0a /* Public */,
      18,    2,   93,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int,    9,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   11,   12,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt,   11,   12,   14,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   19,   20,

       0        // eod
};

void ClientModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ClientModel *_t = static_cast<ClientModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->numConnectionsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->numBlocksChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->alertsChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->miningChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->error((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 5: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 6: _t->updateTimer(); break;
        case 7: _t->updateNumConnections((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->updateAlert((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ClientModel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientModel::numConnectionsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ClientModel::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientModel::numBlocksChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ClientModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientModel::alertsChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ClientModel::*)(bool , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientModel::miningChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ClientModel::*)(const QString & , const QString & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientModel::error)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ClientModel::*)(const QString & , const QString & , unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientModel::message)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ClientModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ClientModel.data,
      qt_meta_data_ClientModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ClientModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClientModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ClientModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ClientModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void ClientModel::numConnectionsChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ClientModel::numBlocksChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ClientModel::alertsChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ClientModel::miningChanged(bool _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ClientModel::error(const QString & _t1, const QString & _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ClientModel::message(const QString & _t1, const QString & _t2, unsigned int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
