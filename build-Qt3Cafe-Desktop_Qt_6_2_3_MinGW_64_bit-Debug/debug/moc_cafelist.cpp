/****************************************************************************
** Meta object code from reading C++ file 'cafelist.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Qt3Cafe/cafelist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cafelist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CafeList_t {
    const uint offsetsAndSize[28];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_CafeList_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_CafeList_t qt_meta_stringdata_CafeList = {
    {
QT_MOC_LITERAL(0, 8), // "CafeList"
QT_MOC_LITERAL(9, 3), // "add"
QT_MOC_LITERAL(13, 0), // ""
QT_MOC_LITERAL(14, 8), // "nameCafe"
QT_MOC_LITERAL(23, 11), // "addressCafe"
QT_MOC_LITERAL(35, 8), // "typeCafe"
QT_MOC_LITERAL(44, 8), // "timeCafe"
QT_MOC_LITERAL(53, 3), // "del"
QT_MOC_LITERAL(57, 5), // "index"
QT_MOC_LITERAL(63, 5), // "count"
QT_MOC_LITERAL(69, 11), // "textSelArea"
QT_MOC_LITERAL(81, 4), // "edit"
QT_MOC_LITERAL(86, 9), // "cafeModel"
QT_MOC_LITERAL(96, 19) // "QAbstractListModel*"

    },
    "CafeList\0add\0\0nameCafe\0addressCafe\0"
    "typeCafe\0timeCafe\0del\0index\0count\0"
    "textSelArea\0edit\0cafeModel\0"
    "QAbstractListModel*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CafeList[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       1,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       1,    4,   38,    2, 0x02,    2 /* Public */,
       7,    1,   47,    2, 0x02,    7 /* Public */,
       9,    1,   50,    2, 0x02,    9 /* Public */,
      11,    5,   53,    2, 0x02,   11 /* Public */,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::QString, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Int,    3,    4,    5,    6,    8,

 // properties: name, type, flags
      12, 0x80000000 | 13, 0x00015409, uint(-1), 0,

       0        // eod
};

void CafeList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CafeList *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->add((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 1: _t->del((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 2: { QString _r = _t->count((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->edit((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const int(*)>(_a[5]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<CafeList *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QAbstractListModel**>(_v) = _t->getModel(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject CafeList::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_CafeList.offsetsAndSize,
    qt_meta_data_CafeList,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_CafeList_t
, QtPrivate::TypeAndForceComplete<QAbstractListModel*, std::true_type>, QtPrivate::TypeAndForceComplete<CafeList, std::true_type>

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const int, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const int, std::false_type>

>,
    nullptr
} };


const QMetaObject *CafeList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CafeList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CafeList.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int CafeList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
