#include "data.h"

QSqlDatabase data::rules_DB = QSqlDatabase::addDatabase("QSQLITE");
QString data::fullPath = "";

data::data()
{
    if (fullPath.isEmpty()) {
        setFullPath(QDir().currentPath() + "/Rules.db");
    }
}

void data::setFullPath(const QString &path)
{
    fullPath = path;
    rules_DB.setDatabaseName(fullPath);
}

QString data::getFullPath()
{
    return fullPath;
}

bool data::openDatabase()
{
    if (!rules_DB.isOpen()) {
        if (!rules_DB.open()) {
            qDebug() << "Failed to open DB:" << rules_DB.lastError().text();
            return false;
        }
    }
    return true;
}

void data::closeDatabase()
{
    if (rules_DB.isOpen())
        rules_DB.close();
}

bool data::getRule1()
{
    if (!openDatabase()) return false;

    QSqlQuery query(rules_DB);
    if (!query.exec("SELECT RULE1 FROM RULES_SET WHERE ID=365")) {
        qDebug() << "Read RULE1 failed:" << query.lastError().text();
        return false;
    }

    if (query.next()) {
        return query.value(0).toBool();
    }

    return false;  // default false if not found
}

bool data::setRule1(bool value)
{
    if (!openDatabase()) return false;

    QSqlQuery query(rules_DB);
    query.prepare("UPDATE RULES_SET SET RULE1 = :val WHERE ID = 365");
    query.bindValue(":val", value ? 1 : 0);

    if (!query.exec()) {
        qDebug() << "Update RULE1 failed:" << query.lastError().text();
        return false;
    }

    return true;
}
