/****************************************************************************
** Meta object code from reading C++ file 'fft_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fft_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fft_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_fft_dialog_t {
    QByteArrayData data[7];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_fft_dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_fft_dialog_t qt_meta_stringdata_fft_dialog = {
    {
QT_MOC_LITERAL(0, 0, 10), // "fft_dialog"
QT_MOC_LITERAL(1, 11, 20), // "ButtonLowPassClicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 21), // "ButtonHighPassClicked"
QT_MOC_LITERAL(4, 55, 24), // "ButttonSizeChangeClicked"
QT_MOC_LITERAL(5, 80, 14), // "SLideFreChange"
QT_MOC_LITERAL(6, 95, 15) // "SLideSizeChange"

    },
    "fft_dialog\0ButtonLowPassClicked\0\0"
    "ButtonHighPassClicked\0ButttonSizeChangeClicked\0"
    "SLideFreChange\0SLideSizeChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_fft_dialog[] = {

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
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    1,   42,    2, 0x08 /* Private */,
       6,    1,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void fft_dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        fft_dialog *_t = static_cast<fft_dialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ButtonLowPassClicked(); break;
        case 1: _t->ButtonHighPassClicked(); break;
        case 2: _t->ButttonSizeChangeClicked(); break;
        case 3: _t->SLideFreChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->SLideSizeChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject fft_dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_fft_dialog.data,
      qt_meta_data_fft_dialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *fft_dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fft_dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_fft_dialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int fft_dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE