/****************************************************************************
** Meta object code from reading C++ file 'PruebaQThreads.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "PruebaQThreads.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PruebaQThreads.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PruebaQThreads_t {
    QByteArrayData data[7];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PruebaQThreads_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PruebaQThreads_t qt_meta_stringdata_PruebaQThreads = {
    {
QT_MOC_LITERAL(0, 0, 14), // "PruebaQThreads"
QT_MOC_LITERAL(1, 15, 13), // "insertMessage"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 19), // "insertThreadMessage"
QT_MOC_LITERAL(4, 50, 19), // "showMessageFinished"
QT_MOC_LITERAL(5, 70, 11), // "startThread"
QT_MOC_LITERAL(6, 82, 10) // "stopThread"

    },
    "PruebaQThreads\0insertMessage\0\0"
    "insertThreadMessage\0showMessageFinished\0"
    "startThread\0stopThread"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PruebaQThreads[] = {

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
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    0,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PruebaQThreads::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PruebaQThreads *_t = static_cast<PruebaQThreads *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->insertMessage(); break;
        case 1: _t->insertThreadMessage(); break;
        case 2: _t->showMessageFinished(); break;
        case 3: _t->startThread(); break;
        case 4: _t->stopThread(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject PruebaQThreads::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_PruebaQThreads.data,
      qt_meta_data_PruebaQThreads,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PruebaQThreads::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PruebaQThreads::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PruebaQThreads.stringdata0))
        return static_cast<void*>(const_cast< PruebaQThreads*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int PruebaQThreads::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
