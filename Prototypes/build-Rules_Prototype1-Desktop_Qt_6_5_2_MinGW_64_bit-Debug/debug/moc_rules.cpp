/****************************************************************************
** Meta object code from reading C++ file 'rules.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Rules_Prototype1/rules.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rules.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSRulesENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSRulesENDCLASS = QtMocHelpers::stringData(
    "Rules",
    "rulesConfirmed",
    "",
    "databaseCalled",
    "QSqlDatabase",
    "newDatabaseCalled",
    "on_Confirm_Button_clicked",
    "newOpenDatabase",
    "QSqlQuery",
    "newGetDatabaseInfo"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSRulesENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[6];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[13];
    char stringdata5[18];
    char stringdata6[26];
    char stringdata7[16];
    char stringdata8[10];
    char stringdata9[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSRulesENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSRulesENDCLASS_t qt_meta_stringdata_CLASSRulesENDCLASS = {
    {
        QT_MOC_LITERAL(0, 5),  // "Rules"
        QT_MOC_LITERAL(6, 14),  // "rulesConfirmed"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 14),  // "databaseCalled"
        QT_MOC_LITERAL(37, 12),  // "QSqlDatabase"
        QT_MOC_LITERAL(50, 17),  // "newDatabaseCalled"
        QT_MOC_LITERAL(68, 25),  // "on_Confirm_Button_clicked"
        QT_MOC_LITERAL(94, 15),  // "newOpenDatabase"
        QT_MOC_LITERAL(110, 9),  // "QSqlQuery"
        QT_MOC_LITERAL(120, 18)   // "newGetDatabaseInfo"
    },
    "Rules",
    "rulesConfirmed",
    "",
    "databaseCalled",
    "QSqlDatabase",
    "newDatabaseCalled",
    "on_Confirm_Button_clicked",
    "newOpenDatabase",
    "QSqlQuery",
    "newGetDatabaseInfo"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSRulesENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    1 /* Public */,
       3,    0,   51,    2, 0x06,    2 /* Public */,
       5,    0,   52,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   53,    2, 0x08,    4 /* Private */,
       7,    1,   54,    2, 0x08,    5 /* Private */,
       9,    1,   57,    2, 0x08,    7 /* Private */,

 // signals: parameters
    QMetaType::Void,
    0x80000000 | 4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    0x80000000 | 8, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 8,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject Rules::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSRulesENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSRulesENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSRulesENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Rules, std::true_type>,
        // method 'rulesConfirmed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'databaseCalled'
        QtPrivate::TypeAndForceComplete<QSqlDatabase, std::false_type>,
        // method 'newDatabaseCalled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Confirm_Button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'newOpenDatabase'
        QtPrivate::TypeAndForceComplete<QSqlQuery, std::false_type>,
        QtPrivate::TypeAndForceComplete<QSqlDatabase, std::false_type>,
        // method 'newGetDatabaseInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QSqlQuery, std::false_type>
    >,
    nullptr
} };

void Rules::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Rules *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->rulesConfirmed(); break;
        case 1: { QSqlDatabase _r = _t->databaseCalled();
            if (_a[0]) *reinterpret_cast< QSqlDatabase*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->newDatabaseCalled(); break;
        case 3: _t->on_Confirm_Button_clicked(); break;
        case 4: { QSqlQuery _r = _t->newOpenDatabase((*reinterpret_cast< std::add_pointer_t<QSqlDatabase>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlQuery*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->newGetDatabaseInfo((*reinterpret_cast< std::add_pointer_t<QSqlQuery>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Rules::*)();
            if (_t _q_method = &Rules::rulesConfirmed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = QSqlDatabase (Rules::*)();
            if (_t _q_method = &Rules::databaseCalled; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Rules::*)();
            if (_t _q_method = &Rules::newDatabaseCalled; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *Rules::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Rules::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSRulesENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Rules::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Rules::rulesConfirmed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
QSqlDatabase Rules::databaseCalled()
{
    QSqlDatabase _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
    return _t0;
}

// SIGNAL 2
void Rules::newDatabaseCalled()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
