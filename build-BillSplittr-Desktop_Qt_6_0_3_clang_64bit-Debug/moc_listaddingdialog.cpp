/****************************************************************************
** Meta object code from reading C++ file 'listaddingdialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.0.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../BillSplittr/listaddingdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'listaddingdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.0.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ListAddingDialog_t {
    const uint offsetsAndSize[16];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ListAddingDialog_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ListAddingDialog_t qt_meta_stringdata_ListAddingDialog = {
    {
QT_MOC_LITERAL(0, 16), // "ListAddingDialog"
QT_MOC_LITERAL(17, 17), // "numButton_clicked"
QT_MOC_LITERAL(35, 0), // ""
QT_MOC_LITERAL(36, 18), // "mathButton_clicked"
QT_MOC_LITERAL(55, 23), // "on_equal_button_clicked"
QT_MOC_LITERAL(79, 21), // "on_del_button_clicked"
QT_MOC_LITERAL(101, 27), // "on_selectAll_button_clicked"
QT_MOC_LITERAL(129, 22) // "on_done_button_clicked"

    },
    "ListAddingDialog\0numButton_clicked\0\0"
    "mathButton_clicked\0on_equal_button_clicked\0"
    "on_del_button_clicked\0on_selectAll_button_clicked\0"
    "on_done_button_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ListAddingDialog[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x08,    0 /* Private */,
       3,    0,   51,    2, 0x08,    1 /* Private */,
       4,    0,   52,    2, 0x08,    2 /* Private */,
       5,    0,   53,    2, 0x08,    3 /* Private */,
       6,    0,   54,    2, 0x08,    4 /* Private */,
       7,    0,   55,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ListAddingDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ListAddingDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->numButton_clicked(); break;
        case 1: _t->mathButton_clicked(); break;
        case 2: _t->on_equal_button_clicked(); break;
        case 3: _t->on_del_button_clicked(); break;
        case 4: _t->on_selectAll_button_clicked(); break;
        case 5: _t->on_done_button_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject ListAddingDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ListAddingDialog.offsetsAndSize,
    qt_meta_data_ListAddingDialog,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ListAddingDialog_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *ListAddingDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ListAddingDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ListAddingDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ListAddingDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
