/****************************************************************************
** Meta object code from reading C++ file 'walletframe.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/walletframe.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'walletframe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletFrame_t {
    QByteArrayData data[18];
    char stringdata0[260];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletFrame_t qt_meta_stringdata_WalletFrame = {
    {
QT_MOC_LITERAL(0, 0, 11), // "WalletFrame"
QT_MOC_LITERAL(1, 12, 16), // "gotoOverviewPage"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 15), // "gotoHistoryPage"
QT_MOC_LITERAL(4, 46, 19), // "gotoAddressBookPage"
QT_MOC_LITERAL(5, 66, 20), // "gotoReceiveCoinsPage"
QT_MOC_LITERAL(6, 87, 17), // "gotoSendCoinsPage"
QT_MOC_LITERAL(7, 105, 4), // "addr"
QT_MOC_LITERAL(8, 110, 14), // "gotoMiningPage"
QT_MOC_LITERAL(9, 125, 18), // "gotoSignMessageTab"
QT_MOC_LITERAL(10, 144, 20), // "gotoVerifyMessageTab"
QT_MOC_LITERAL(11, 165, 13), // "encryptWallet"
QT_MOC_LITERAL(12, 179, 6), // "status"
QT_MOC_LITERAL(13, 186, 12), // "backupWallet"
QT_MOC_LITERAL(14, 199, 16), // "changePassphrase"
QT_MOC_LITERAL(15, 216, 10), // "lockWallet"
QT_MOC_LITERAL(16, 227, 12), // "unlockWallet"
QT_MOC_LITERAL(17, 240, 19) // "setEncryptionStatus"

    },
    "WalletFrame\0gotoOverviewPage\0\0"
    "gotoHistoryPage\0gotoAddressBookPage\0"
    "gotoReceiveCoinsPage\0gotoSendCoinsPage\0"
    "addr\0gotoMiningPage\0gotoSignMessageTab\0"
    "gotoVerifyMessageTab\0encryptWallet\0"
    "status\0backupWallet\0changePassphrase\0"
    "lockWallet\0unlockWallet\0setEncryptionStatus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x0a /* Public */,
       3,    0,  100,    2, 0x0a /* Public */,
       4,    0,  101,    2, 0x0a /* Public */,
       5,    0,  102,    2, 0x0a /* Public */,
       6,    1,  103,    2, 0x0a /* Public */,
       6,    0,  106,    2, 0x2a /* Public | MethodCloned */,
       8,    0,  107,    2, 0x0a /* Public */,
       9,    1,  108,    2, 0x0a /* Public */,
       9,    0,  111,    2, 0x2a /* Public | MethodCloned */,
      10,    1,  112,    2, 0x0a /* Public */,
      10,    0,  115,    2, 0x2a /* Public | MethodCloned */,
      11,    1,  116,    2, 0x0a /* Public */,
      13,    0,  119,    2, 0x0a /* Public */,
      14,    0,  120,    2, 0x0a /* Public */,
      15,    0,  121,    2, 0x0a /* Public */,
      16,    0,  122,    2, 0x0a /* Public */,
      17,    0,  123,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WalletFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WalletFrame *_t = static_cast<WalletFrame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->gotoOverviewPage(); break;
        case 1: _t->gotoHistoryPage(); break;
        case 2: _t->gotoAddressBookPage(); break;
        case 3: _t->gotoReceiveCoinsPage(); break;
        case 4: _t->gotoSendCoinsPage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->gotoSendCoinsPage(); break;
        case 6: _t->gotoMiningPage(); break;
        case 7: _t->gotoSignMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->gotoSignMessageTab(); break;
        case 9: _t->gotoVerifyMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->gotoVerifyMessageTab(); break;
        case 11: _t->encryptWallet((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->backupWallet(); break;
        case 13: _t->changePassphrase(); break;
        case 14: _t->lockWallet(); break;
        case 15: _t->unlockWallet(); break;
        case 16: _t->setEncryptionStatus(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WalletFrame::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_WalletFrame.data,
      qt_meta_data_WalletFrame,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WalletFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletFrame.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int WalletFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
