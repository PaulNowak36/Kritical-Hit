/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Rules_Prototype1/mainwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.2. It"
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
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "handleDatabaseCall",
    "",
    "on_rules_Button_clicked",
    "on_test_Button_clicked",
    "moveMainMenu",
    "openDatabase",
    "QSqlQuery",
    "getDatabaseInfo",
    "getDatabase",
    "QSqlDatabase"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[11];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[24];
    char stringdata4[23];
    char stringdata5[13];
    char stringdata6[13];
    char stringdata7[10];
    char stringdata8[16];
    char stringdata9[12];
    char stringdata10[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 18),  // "handleDatabaseCall"
        QT_MOC_LITERAL(30, 0),  // ""
        QT_MOC_LITERAL(31, 23),  // "on_rules_Button_clicked"
        QT_MOC_LITERAL(55, 22),  // "on_test_Button_clicked"
        QT_MOC_LITERAL(78, 12),  // "moveMainMenu"
        QT_MOC_LITERAL(91, 12),  // "openDatabase"
        QT_MOC_LITERAL(104, 9),  // "QSqlQuery"
        QT_MOC_LITERAL(114, 15),  // "getDatabaseInfo"
        QT_MOC_LITERAL(130, 11),  // "getDatabase"
        QT_MOC_LITERAL(142, 12)   // "QSqlDatabase"
    },
    "MainWindow",
    "handleDatabaseCall",
    "",
    "on_rules_Button_clicked",
    "on_test_Button_clicked",
    "moveMainMenu",
    "openDatabase",
    "QSqlQuery",
    "getDatabaseInfo",
    "getDatabase",
    "QSqlDatabase"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x0a,    1 /* Public */,
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    0,   58,    2, 0x08,    3 /* Private */,
       5,    0,   59,    2, 0x08,    4 /* Private */,
       6,    0,   60,    2, 0x08,    5 /* Private */,
       8,    1,   61,    2, 0x08,    6 /* Private */,
       9,    0,   64,    2, 0x08,    8 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 7,
    QMetaType::Void, 0x80000000 | 7,    2,
    0x80000000 | 10,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'handleDatabaseCall'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_rules_Button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_test_Button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'moveMainMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openDatabase'
        QtPrivate::TypeAndForceComplete<QSqlQuery, std::false_type>,
        // method 'getDatabaseInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QSqlQuery, std::false_type>,
        // method 'getDatabase'
        QtPrivate::TypeAndForceComplete<QSqlDatabase, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->handleDatabaseCall(); break;
        case 1: _t->on_rules_Button_clicked(); break;
        case 2: _t->on_test_Button_clicked(); break;
        case 3: _t->moveMainMenu(); break;
        case 4: { QSqlQuery _r = _t->openDatabase();
            if (_a[0]) *reinterpret_cast< QSqlQuery*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->getDatabaseInfo((*reinterpret_cast< std::add_pointer_t<QSqlQuery>>(_a[1]))); break;
        case 6: { QSqlDatabase _r = _t->getDatabase();
            if (_a[0]) *reinterpret_cast< QSqlDatabase*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
