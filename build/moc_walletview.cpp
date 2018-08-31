/****************************************************************************
** Meta object code from reading C++ file 'walletview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/walletview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'walletview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletView_t {
    QByteArrayData data[23];
    char stringdata0[326];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletView_t qt_meta_stringdata_WalletView = {
    {
QT_MOC_LITERAL(0, 0, 10), // "WalletView"
QT_MOC_LITERAL(1, 11, 21), // "showNormalIfMinimized"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 16), // "gotoOverviewPage"
QT_MOC_LITERAL(4, 51, 15), // "gotoHistoryPage"
QT_MOC_LITERAL(5, 67, 19), // "gotoAddressBookPage"
QT_MOC_LITERAL(6, 87, 20), // "gotoReceiveCoinsPage"
QT_MOC_LITERAL(7, 108, 17), // "gotoSendCoinsPage"
QT_MOC_LITERAL(8, 126, 4), // "addr"
QT_MOC_LITERAL(9, 131, 14), // "gotoMiningPage"
QT_MOC_LITERAL(10, 146, 18), // "gotoSignMessageTab"
QT_MOC_LITERAL(11, 165, 20), // "gotoVerifyMessageTab"
QT_MOC_LITERAL(12, 186, 19), // "incomingTransaction"
QT_MOC_LITERAL(13, 206, 11), // "QModelIndex"
QT_MOC_LITERAL(14, 218, 6), // "parent"
QT_MOC_LITERAL(15, 225, 5), // "start"
QT_MOC_LITERAL(16, 231, 13), // "encryptWallet"
QT_MOC_LITERAL(17, 245, 6), // "status"
QT_MOC_LITERAL(18, 252, 12), // "backupWallet"
QT_MOC_LITERAL(19, 265, 16), // "changePassphrase"
QT_MOC_LITERAL(20, 282, 10), // "lockWallet"
QT_MOC_LITERAL(21, 293, 12), // "unlockWallet"
QT_MOC_LITERAL(22, 306, 19) // "setEncryptionStatus"

    },
    "WalletView\0showNormalIfMinimized\0\0"
    "gotoOverviewPage\0gotoHistoryPage\0"
    "gotoAddressBookPage\0gotoReceiveCoinsPage\0"
    "gotoSendCoinsPage\0addr\0gotoMiningPage\0"
    "gotoSignMessageTab\0gotoVerifyMessageTab\0"
    "incomingTransaction\0QModelIndex\0parent\0"
    "start\0encryptWallet\0status\0backupWallet\0"
    "changePassphrase\0lockWallet\0unlockWallet\0"
    "setEncryptionStatus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,  110,    2, 0x0a /* Public */,
       4,    0,  111,    2, 0x0a /* Public */,
       5,    0,  112,    2, 0x0a /* Public */,
       6,    0,  113,    2, 0x0a /* Public */,
       7,    1,  114,    2, 0x0a /* Public */,
       7,    0,  117,    2, 0x2a /* Public | MethodCloned */,
       9,    0,  118,    2, 0x0a /* Public */,
      10,    1,  119,    2, 0x0a /* Public */,
      10,    0,  122,    2, 0x2a /* Public | MethodCloned */,
      11,    1,  123,    2, 0x0a /* Public */,
      11,    0,  126,    2, 0x2a /* Public | MethodCloned */,
      12,    3,  127,    2, 0x0a /* Public */,
      16,    1,  134,    2, 0x0a /* Public */,
      18,    0,  137,    2, 0x0a /* Public */,
      19,    0,  138,    2, 0x0a /* Public */,
      20,    0,  139,    2, 0x0a /* Public */,
      21,    0,  140,    2, 0x0a /* Public */,
      22,    0,  141,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13, QMetaType::Int, QMetaType::Int,   14,   15,    2,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WalletView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WalletView *_t = static_cast<WalletView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showNormalIfMinimized(); break;
        case 1: _t->gotoOverviewPage(); break;
        case 2: _t->gotoHistoryPage(); break;
        case 3: _t->gotoAddressBookPage(); break;
        case 4: _t->gotoReceiveCoinsPage(); break;
        case 5: _t->gotoSendCoinsPage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->gotoSendCoinsPage(); break;
        case 7: _t->gotoMiningPage(); break;
        case 8: _t->gotoSignMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->gotoSignMessageTab(); break;
        case 10: _t->gotoVerifyMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->gotoVerifyMessageTab(); break;
        case 12: _t->incomingTransaction((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 13: _t->encryptWallet((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->backupWallet(); break;
        case 15: _t->changePassphrase(); break;
        case 16: _t->lockWallet(); break;
        case 17: _t->unlockWallet(); break;
        case 18: _t->setEncryptionStatus(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WalletView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletView::showNormalIfMinimized)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WalletView::staticMetaObject = {
    { &QStackedWidget::staticMetaObject, qt_meta_stringdata_WalletView.data,
      qt_meta_data_WalletView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WalletView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletView.stringdata0))
        return static_cast<void*>(this);
    return QStackedWidget::qt_metacast(_clname);
}

int WalletView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStackedWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void WalletView::showNormalIfMinimized()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
