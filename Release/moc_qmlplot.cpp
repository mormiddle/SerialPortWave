/****************************************************************************
** Meta object code from reading C++ file 'qmlplot.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../SerialPortDemo/cpp/common/qmlplot.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmlplot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DDuiBasePlotItem_t {
    QByteArrayData data[7];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DDuiBasePlotItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DDuiBasePlotItem_t qt_meta_stringdata_DDuiBasePlotItem = {
    {
QT_MOC_LITERAL(0, 0, 16), // "DDuiBasePlotItem"
QT_MOC_LITERAL(1, 17, 12), // "graphClicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 21), // "QCPAbstractPlottable*"
QT_MOC_LITERAL(4, 53, 9), // "plottable"
QT_MOC_LITERAL(5, 63, 14), // "onCustomReplot"
QT_MOC_LITERAL(6, 78, 20) // "updateCustomPlotSize"

    },
    "DDuiBasePlotItem\0graphClicked\0\0"
    "QCPAbstractPlottable*\0plottable\0"
    "onCustomReplot\0updateCustomPlotSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DDuiBasePlotItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       5,    0,   32,    2, 0x0a /* Public */,
       6,    0,   33,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DDuiBasePlotItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DDuiBasePlotItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->graphClicked((*reinterpret_cast< QCPAbstractPlottable*(*)>(_a[1]))); break;
        case 1: _t->onCustomReplot(); break;
        case 2: _t->updateCustomPlotSize(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPAbstractPlottable* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DDuiBasePlotItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickPaintedItem::staticMetaObject>(),
    qt_meta_stringdata_DDuiBasePlotItem.data,
    qt_meta_data_DDuiBasePlotItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DDuiBasePlotItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DDuiBasePlotItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DDuiBasePlotItem.stringdata0))
        return static_cast<void*>(this);
    return QQuickPaintedItem::qt_metacast(_clname);
}

int DDuiBasePlotItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPaintedItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_CustomPlotItem_t {
    QByteArrayData data[10];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CustomPlotItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CustomPlotItem_t qt_meta_stringdata_CustomPlotItem = {
    {
QT_MOC_LITERAL(0, 0, 14), // "CustomPlotItem"
QT_MOC_LITERAL(1, 15, 17), // "aisleValueChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 5), // "value"
QT_MOC_LITERAL(4, 40, 13), // "setAisleValue"
QT_MOC_LITERAL(5, 54, 14), // "initCustomPlot"
QT_MOC_LITERAL(6, 69, 11), // "upAisleData"
QT_MOC_LITERAL(7, 81, 8), // "saveData"
QT_MOC_LITERAL(8, 90, 9), // "clearData"
QT_MOC_LITERAL(9, 100, 9) // "clearPlot"

    },
    "CustomPlotItem\0aisleValueChanged\0\0"
    "value\0setAisleValue\0initCustomPlot\0"
    "upAisleData\0saveData\0clearData\0clearPlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CustomPlotItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   52,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    0,   55,    2, 0x02 /* Public */,
       6,    0,   56,    2, 0x02 /* Public */,
       7,    0,   57,    2, 0x02 /* Public */,
       8,    0,   58,    2, 0x02 /* Public */,
       9,    0,   59,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CustomPlotItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CustomPlotItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->aisleValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setAisleValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->initCustomPlot(); break;
        case 3: _t->upAisleData(); break;
        case 4: _t->saveData(); break;
        case 5: _t->clearData(); break;
        case 6: _t->clearPlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CustomPlotItem::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CustomPlotItem::aisleValueChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CustomPlotItem::staticMetaObject = { {
    QMetaObject::SuperData::link<DDuiBasePlotItem::staticMetaObject>(),
    qt_meta_stringdata_CustomPlotItem.data,
    qt_meta_data_CustomPlotItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CustomPlotItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CustomPlotItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CustomPlotItem.stringdata0))
        return static_cast<void*>(this);
    return DDuiBasePlotItem::qt_metacast(_clname);
}

int CustomPlotItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DDuiBasePlotItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void CustomPlotItem::aisleValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
