/****************************************************************************
** Meta object code from reading C++ file 'tablet3.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../tablet3.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tablet3.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tablet3_t {
    QByteArrayData data[8];
    char stringdata0[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tablet3_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tablet3_t qt_meta_stringdata_tablet3 = {
    {
QT_MOC_LITERAL(0, 0, 7), // "tablet3"
QT_MOC_LITERAL(1, 8, 8), // "funkcja1"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 8), // "funkcja2"
QT_MOC_LITERAL(4, 27, 8), // "funkcja3"
QT_MOC_LITERAL(5, 36, 8), // "funkcja4"
QT_MOC_LITERAL(6, 45, 8), // "funkcja5"
QT_MOC_LITERAL(7, 54, 8) // "funkcja6"

    },
    "tablet3\0funkcja1\0\0funkcja2\0funkcja3\0"
    "funkcja4\0funkcja5\0funkcja6"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tablet3[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x0a /* Public */,
       4,    0,   46,    2, 0x0a /* Public */,
       5,    0,   47,    2, 0x0a /* Public */,
       6,    0,   48,    2, 0x0a /* Public */,
       7,    0,   49,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tablet3::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tablet3 *_t = static_cast<tablet3 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->funkcja1(); break;
        case 1: _t->funkcja2(); break;
        case 2: _t->funkcja3(); break;
        case 3: _t->funkcja4(); break;
        case 4: _t->funkcja5(); break;
        case 5: _t->funkcja6(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject tablet3::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_tablet3.data,
      qt_meta_data_tablet3,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tablet3::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tablet3::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tablet3.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int tablet3::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
