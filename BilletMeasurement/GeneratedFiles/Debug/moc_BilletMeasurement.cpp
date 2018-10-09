/****************************************************************************
** Meta object code from reading C++ file 'BilletMeasurement.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../BilletMeasurement.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BilletMeasurement.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BilletMeasurement_t {
    QByteArrayData data[11];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BilletMeasurement_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BilletMeasurement_t qt_meta_stringdata_BilletMeasurement = {
    {
QT_MOC_LITERAL(0, 0, 17), // "BilletMeasurement"
QT_MOC_LITERAL(1, 18, 14), // "SlotCamConnect"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 17), // "SlotCamDisconnect"
QT_MOC_LITERAL(4, 52, 13), // "SlotStartGrab"
QT_MOC_LITERAL(5, 66, 13), // "SlotPauseGrab"
QT_MOC_LITERAL(6, 80, 14), // "SlotSetCamPara"
QT_MOC_LITERAL(7, 95, 12), // "SlotOpenSync"
QT_MOC_LITERAL(8, 108, 13), // "SlotCloseSync"
QT_MOC_LITERAL(9, 122, 11), // "SlotSetSync"
QT_MOC_LITERAL(10, 134, 8) // "InitSlot"

    },
    "BilletMeasurement\0SlotCamConnect\0\0"
    "SlotCamDisconnect\0SlotStartGrab\0"
    "SlotPauseGrab\0SlotSetCamPara\0SlotOpenSync\0"
    "SlotCloseSync\0SlotSetSync\0InitSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BilletMeasurement[] = {

 // content:
       7,       // revision
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
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BilletMeasurement::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BilletMeasurement *_t = static_cast<BilletMeasurement *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SlotCamConnect(); break;
        case 1: _t->SlotCamDisconnect(); break;
        case 2: _t->SlotStartGrab(); break;
        case 3: _t->SlotPauseGrab(); break;
        case 4: _t->SlotSetCamPara(); break;
        case 5: _t->SlotOpenSync(); break;
        case 6: _t->SlotCloseSync(); break;
        case 7: _t->SlotSetSync(); break;
        case 8: _t->InitSlot(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject BilletMeasurement::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_BilletMeasurement.data,
      qt_meta_data_BilletMeasurement,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BilletMeasurement::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BilletMeasurement::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BilletMeasurement.stringdata0))
        return static_cast<void*>(const_cast< BilletMeasurement*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int BilletMeasurement::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
