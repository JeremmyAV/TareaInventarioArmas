/****************************************************************************
** Meta object code from reading C++ file 'confirmareliminacion.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../TareaArmarHarry/confirmareliminacion.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'confirmareliminacion.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSconfirmarEliminacionENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSconfirmarEliminacionENDCLASS = QtMocHelpers::stringData(
    "confirmarEliminacion",
    "on_buttonBox_accepted",
    "",
    "on_listWidgetArmas_itemClicked",
    "QListWidgetItem*",
    "item",
    "on_buttonConfElim_clicked",
    "on_confirmarEliminacion_rejected"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSconfirmarEliminacionENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[21];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[31];
    char stringdata4[17];
    char stringdata5[5];
    char stringdata6[26];
    char stringdata7[33];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSconfirmarEliminacionENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSconfirmarEliminacionENDCLASS_t qt_meta_stringdata_CLASSconfirmarEliminacionENDCLASS = {
    {
        QT_MOC_LITERAL(0, 20),  // "confirmarEliminacion"
        QT_MOC_LITERAL(21, 21),  // "on_buttonBox_accepted"
        QT_MOC_LITERAL(43, 0),  // ""
        QT_MOC_LITERAL(44, 30),  // "on_listWidgetArmas_itemClicked"
        QT_MOC_LITERAL(75, 16),  // "QListWidgetItem*"
        QT_MOC_LITERAL(92, 4),  // "item"
        QT_MOC_LITERAL(97, 25),  // "on_buttonConfElim_clicked"
        QT_MOC_LITERAL(123, 32)   // "on_confirmarEliminacion_rejected"
    },
    "confirmarEliminacion",
    "on_buttonBox_accepted",
    "",
    "on_listWidgetArmas_itemClicked",
    "QListWidgetItem*",
    "item",
    "on_buttonConfElim_clicked",
    "on_confirmarEliminacion_rejected"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSconfirmarEliminacionENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x08,    1 /* Private */,
       3,    1,   39,    2, 0x08,    2 /* Private */,
       6,    0,   42,    2, 0x08,    4 /* Private */,
       7,    0,   43,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject confirmarEliminacion::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSconfirmarEliminacionENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSconfirmarEliminacionENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSconfirmarEliminacionENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<confirmarEliminacion, std::true_type>,
        // method 'on_buttonBox_accepted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_listWidgetArmas_itemClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        // method 'on_buttonConfElim_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_confirmarEliminacion_rejected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void confirmarEliminacion::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<confirmarEliminacion *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_buttonBox_accepted(); break;
        case 1: _t->on_listWidgetArmas_itemClicked((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 2: _t->on_buttonConfElim_clicked(); break;
        case 3: _t->on_confirmarEliminacion_rejected(); break;
        default: ;
        }
    }
}

const QMetaObject *confirmarEliminacion::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *confirmarEliminacion::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSconfirmarEliminacionENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int confirmarEliminacion::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
