/****************************************************************************
** Meta object code from reading C++ file 'staticao.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../staticao.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'staticao.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StaticAO_t {
    QByteArrayData data[13];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StaticAO_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StaticAO_t qt_meta_stringdata_StaticAO = {
    {
QT_MOC_LITERAL(0, 0, 8), // "StaticAO"
QT_MOC_LITERAL(1, 9, 11), // "TimerTicked"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 18), // "SliderValueChanged"
QT_MOC_LITERAL(4, 41, 5), // "value"
QT_MOC_LITERAL(5, 47, 22), // "ButtonConfigureClicked"
QT_MOC_LITERAL(6, 70, 13), // "ManualClicked"
QT_MOC_LITERAL(7, 84, 2), // "id"
QT_MOC_LITERAL(8, 87, 17), // "WaveButtonClicked"
QT_MOC_LITERAL(9, 105, 18), // "ButtonStartClicked"
QT_MOC_LITERAL(10, 124, 18), // "ButtonPauseClicked"
QT_MOC_LITERAL(11, 143, 17), // "ButtonStopClicked"
QT_MOC_LITERAL(12, 161, 19) // "ButtonBrowseClicked"

    },
    "StaticAO\0TimerTicked\0\0SliderValueChanged\0"
    "value\0ButtonConfigureClicked\0ManualClicked\0"
    "id\0WaveButtonClicked\0ButtonStartClicked\0"
    "ButtonPauseClicked\0ButtonStopClicked\0"
    "ButtonBrowseClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StaticAO[] = {

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
       3,    1,   60,    2, 0x08 /* Private */,
       5,    0,   63,    2, 0x08 /* Private */,
       6,    1,   64,    2, 0x08 /* Private */,
       8,    1,   67,    2, 0x08 /* Private */,
       9,    0,   70,    2, 0x08 /* Private */,
      10,    0,   71,    2, 0x08 /* Private */,
      11,    0,   72,    2, 0x08 /* Private */,
      12,    0,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void StaticAO::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StaticAO *_t = static_cast<StaticAO *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->TimerTicked(); break;
        case 1: _t->SliderValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->ButtonConfigureClicked(); break;
        case 3: _t->ManualClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->WaveButtonClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->ButtonStartClicked(); break;
        case 6: _t->ButtonPauseClicked(); break;
        case 7: _t->ButtonStopClicked(); break;
        case 8: _t->ButtonBrowseClicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject StaticAO::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_StaticAO.data,
      qt_meta_data_StaticAO,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *StaticAO::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StaticAO::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StaticAO.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int StaticAO::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
