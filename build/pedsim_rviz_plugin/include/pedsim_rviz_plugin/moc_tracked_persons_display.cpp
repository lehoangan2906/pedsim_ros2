/****************************************************************************
** Meta object code from reading C++ file 'tracked_persons_display.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/pedsim_ros2/pedsim_rviz_plugin/include/pedsim_rviz_plugin/tracked_persons_display.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tracked_persons_display.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pedsim_rviz_plugin__TrackedPersonsDisplay_t {
    QByteArrayData data[4];
    char stringdata0[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pedsim_rviz_plugin__TrackedPersonsDisplay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pedsim_rviz_plugin__TrackedPersonsDisplay_t qt_meta_stringdata_pedsim_rviz_plugin__TrackedPersonsDisplay = {
    {
QT_MOC_LITERAL(0, 0, 41), // "pedsim_rviz_plugin::TrackedPe..."
QT_MOC_LITERAL(1, 42, 23), // "personVisualTypeChanged"
QT_MOC_LITERAL(2, 66, 0), // ""
QT_MOC_LITERAL(3, 67, 13) // "stylesChanged"

    },
    "pedsim_rviz_plugin::TrackedPersonsDisplay\0"
    "personVisualTypeChanged\0\0stylesChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pedsim_rviz_plugin__TrackedPersonsDisplay[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void pedsim_rviz_plugin::TrackedPersonsDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TrackedPersonsDisplay *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->personVisualTypeChanged(); break;
        case 1: _t->stylesChanged(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject pedsim_rviz_plugin::TrackedPersonsDisplay::staticMetaObject = { {
    QMetaObject::SuperData::link<PersonDisplayCommon<pedsim_msgs::msg::TrackedPersons>::staticMetaObject>(),
    qt_meta_stringdata_pedsim_rviz_plugin__TrackedPersonsDisplay.data,
    qt_meta_data_pedsim_rviz_plugin__TrackedPersonsDisplay,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *pedsim_rviz_plugin::TrackedPersonsDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pedsim_rviz_plugin::TrackedPersonsDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pedsim_rviz_plugin__TrackedPersonsDisplay.stringdata0))
        return static_cast<void*>(this);
    return PersonDisplayCommon<pedsim_msgs::msg::TrackedPersons>::qt_metacast(_clname);
}

int pedsim_rviz_plugin::TrackedPersonsDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PersonDisplayCommon<pedsim_msgs::msg::TrackedPersons>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
