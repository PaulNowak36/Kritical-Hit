QT       += core gui sql
QT      += testlib

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17 debug
QMAKE_CXXFLAGS_DEBUG += -g -O0

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Battle.cpp \
    capacity.cpp \
    database.cpp \
    entity.cpp \
    main.cpp \
    mainwindow.cpp \
    newtemplatemenu.cpp \
    rulesmenu.cpp \
    setup.cpp \
    simulationmenu.cpp \
    templatemainmenu.cpp

HEADERS += \
    Battle.h \
    capacity.h \
    database.h \
    entity.h \
    mainwindow.h \
    moveLibrary.h \
    newtemplatemenu.h \
    rulesmenu.h \
    setup.h \
    simulationmenu.h \
    templatemainmenu.h

FORMS += \
    mainwindow.ui \
    newtemplatemenu.ui \
    rulesmenu.ui \
    simulationmenu.ui \
    templatemainmenu.ui

TRANSLATIONS += \
    KriticalHit_App_en_US.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    style.qss

RESOURCES += \
    resources.qrc
