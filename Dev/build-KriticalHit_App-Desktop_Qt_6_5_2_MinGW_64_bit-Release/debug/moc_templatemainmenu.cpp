/****************************************************************************
** Meta object code from reading C++ file 'templatemainmenu.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../KriticalHit_App/templatemainmenu.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'templatemainmenu.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSTemplateMainMenuENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSTemplateMainMenuENDCLASS = QtMocHelpers::stringData(
    "TemplateMainMenu",
    "LoginMenuClicked",
    "",
    "on_logOut_Button2_clicked",
    "moveTemplateMenu",
    "on_simulation_Button_clicked",
    "on_rules_Button_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTemplateMainMenuENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[17];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[26];
    char stringdata4[17];
    char stringdata5[29];
    char stringdata6[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTemplateMainMenuENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTemplateMainMenuENDCLASS_t qt_meta_stringdata_CLASSTemplateMainMenuENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "TemplateMainMenu"
        QT_MOC_LITERAL(17, 16),  // "LoginMenuClicked"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 25),  // "on_logOut_Button2_clicked"
        QT_MOC_LITERAL(61, 16),  // "moveTemplateMenu"
        QT_MOC_LITERAL(78, 28),  // "on_simulation_Button_clicked"
        QT_MOC_LITERAL(107, 23)   // "on_rules_Button_clicked"
    },
    "TemplateMainMenu",
    "LoginMenuClicked",
    "",
    "on_logOut_Button2_clicked",
    "moveTemplateMenu",
    "on_simulation_Button_clicked",
    "on_rules_Button_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTemplateMainMenuENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   45,    2, 0x08,    2 /* Private */,
       4,    0,   46,    2, 0x08,    3 /* Private */,
       5,    0,   47,    2, 0x08,    4 /* Private */,
       6,    0,   48,    2, 0x08,    5 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject TemplateMainMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSTemplateMainMenuENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTemplateMainMenuENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTemplateMainMenuENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TemplateMainMenu, std::true_type>,
        // method 'LoginMenuClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_logOut_Button2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'moveTemplateMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_simulation_Button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_rules_Button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void TemplateMainMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TemplateMainMenu *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->LoginMenuClicked(); break;
        case 1: _t->on_logOut_Button2_clicked(); break;
        case 2: _t->moveTemplateMenu(); break;
        case 3: _t->on_simulation_Button_clicked(); break;
        case 4: _t->on_rules_Button_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TemplateMainMenu::*)();
            if (_t _q_method = &TemplateMainMenu::LoginMenuClicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *TemplateMainMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TemplateMainMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTemplateMainMenuENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TemplateMainMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void TemplateMainMenu::LoginMenuClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
