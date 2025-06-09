#include "mainwindow.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QTextStream>
#include <QFile>
#include <QFileInfo>
#include <QFontDatabase>
#include <QDebug>
#include <QLabel>
#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Load translations
    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "KriticalHit_App_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }

    /// Load and apply the custom font
    QFile fontFile("./PressStart2P-vaV7.ttf");
    qDebug() << "Expected font path: " << QFileInfo(fontFile).absoluteFilePath();

    int fontId = QFontDatabase::addApplicationFont("./PressStart2P-vaV7.ttf");
    qDebug() << QFontDatabase::applicationFontFamilies(fontId);

    if (fontId != -1) {
        QString fontFamily = QFontDatabase::applicationFontFamilies(fontId).at(0);
        qDebug() << "Font loaded successfully: " << fontFamily;
    } else {
        qDebug() << "Failed to load font. Check the file path.";
    }

    MainWindow w;
    w.show();

    return a.exec();
}
