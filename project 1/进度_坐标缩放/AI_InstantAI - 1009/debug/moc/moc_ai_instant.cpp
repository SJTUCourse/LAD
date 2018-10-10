/****************************************************************************
** Meta object code from reading C++ file 'ai_instant.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ai_instant.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ai_instant.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AI_Instant_t {
    QByteArrayData data[11];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AI_Instant_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AI_Instant_t qt_meta_stringdata_AI_Instant = {
    {
QT_MOC_LITERAL(0, 0, 10), // "AI_Instant"
QT_MOC_LITERAL(1, 11, 11), // "TimerTicked"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 18), // "SliderValueChanged"
QT_MOC_LITERAL(4, 43, 5), // "value"
QT_MOC_LITERAL(5, 49, 19), // "SliderXScaleChanged"
QT_MOC_LITERAL(6, 69, 19), // "SliderYScaleChanged"
QT_MOC_LITERAL(7, 89, 18), // "ButtonStartClicked"
QT_MOC_LITERAL(8, 108, 22), // "ButtonConfigureClicked"
QT_MOC_LITERAL(9, 131, 19), // "ButttonPauseClicked"
QT_MOC_LITERAL(10, 151, 17) // "ButtonStopClicked"

    },
    "AI_Instant\0TimerTicked\0\0SliderValueChanged\0"
    "value\0SliderXScaleChanged\0SliderYScaleChanged\0"
    "ButtonStartClicked\0ButtonConfigureClicked\0"
    "ButttonPauseClicked\0ButtonStopClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AI_Instant[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    1,   55,    2, 0x08 /* Private */,
       5,    1,   58,    2, 0x08 /* Private */,
       6,    1,   61,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AI_Instant::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AI_Instant *_t = static_cast<AI_Instant *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->TimerTicked(); break;
        case 1: _t->SliderValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->SliderXScaleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->SliderYScaleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->ButtonStartClicked(); break;
        case 5: _t->ButtonConfigureClicked(); break;
        case 6: _t->ButttonPauseClicked(); break;
        case 7: _t->ButtonStopClicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AI_Instant::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AI_Instant.data,
      qt_meta_data_AI_Instant,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AI_Instant::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AI_Instant::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AI_Instant.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AI_Instant::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
