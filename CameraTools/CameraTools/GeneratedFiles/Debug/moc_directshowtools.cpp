/****************************************************************************
** Meta object code from reading C++ file 'directshowtools.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../directshowtools.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'directshowtools.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DirectShowTools_t {
    QByteArrayData data[6];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DirectShowTools_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DirectShowTools_t qt_meta_stringdata_DirectShowTools = {
    {
QT_MOC_LITERAL(0, 0, 15), // "DirectShowTools"
QT_MOC_LITERAL(1, 16, 16), // "SendUpdataImgMsg"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 16), // "SendImageGrabMsg"
QT_MOC_LITERAL(4, 51, 19), // "SendUnexpectedAbort"
QT_MOC_LITERAL(5, 71, 13) // "SaveGrabImage"

    },
    "DirectShowTools\0SendUpdataImgMsg\0\0"
    "SendImageGrabMsg\0SendUnexpectedAbort\0"
    "SaveGrabImage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DirectShowTools[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void DirectShowTools::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DirectShowTools *_t = static_cast<DirectShowTools *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SendUpdataImgMsg(); break;
        case 1: _t->SendImageGrabMsg(); break;
        case 2: _t->SendUnexpectedAbort(); break;
        case 3: _t->SaveGrabImage(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DirectShowTools::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DirectShowTools::SendUpdataImgMsg)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DirectShowTools::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DirectShowTools::SendImageGrabMsg)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DirectShowTools::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DirectShowTools::SendUnexpectedAbort)) {
                *result = 2;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject DirectShowTools::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_DirectShowTools.data,
      qt_meta_data_DirectShowTools,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DirectShowTools::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DirectShowTools::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DirectShowTools.stringdata0))
        return static_cast<void*>(const_cast< DirectShowTools*>(this));
    return QThread::qt_metacast(_clname);
}

int DirectShowTools::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void DirectShowTools::SendUpdataImgMsg()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void DirectShowTools::SendImageGrabMsg()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void DirectShowTools::SendUnexpectedAbort()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
