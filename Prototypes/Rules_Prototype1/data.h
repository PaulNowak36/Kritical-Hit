#ifndef DATA_H
#define DATA_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDir>
#include <QDebug>

class data
{
private:
    static QSqlDatabase rules_DB;
    static QString fullPath;

public:
    data();  // constructor just sets the path

    static void setFullPath(const QString &path);
    static QString getFullPath();

    static bool openDatabase();
    static void closeDatabase();

    static bool getRule1();               // Read the value of RULE1
    static bool setRule1(bool value);     // Update the value of RULE1
};

#endif // DATA_H
