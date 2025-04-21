#include "database.h"

QSqlDatabase database::rules_DB = QSqlDatabase::addDatabase("QSQLITE");
QString database::fullPath = "";

database::database()
{
    if (fullPath.isEmpty()) {
        setFullPath(QDir().currentPath() + "/rules1.db");
    }
}

void database::setFullPath(const QString &path)
{
    fullPath = path;
    rules_DB.setDatabaseName(fullPath);
}

QString database::getFullPath()
{
    return fullPath;
}

bool database::openDatabase()
{
    if (!rules_DB.isOpen()) {
        if (!rules_DB.open()) {
            qDebug() << "Failed to open DB:" << rules_DB.lastError().text();
            return false;
        }
    }
    return true;
}

void database::closeDatabase()
{
    if (rules_DB.isOpen())
        rules_DB.close();
}

bool database::getHealingRule()
{
    if (!openDatabase()) return false;

    QSqlQuery query(rules_DB);
    if (!query.exec("SELECT healingAllowed FROM RULES_SET1 WHERE rulesID=111")) {
        qDebug() << "Read healingAllowed failed:" << query.lastError().text();
        return false;
    }

    if (query.next()) {
        return query.value(0).toBool();
    }

    return false;  // default false if not found
}

bool database::setHealingRule(bool value)
{
    if (!openDatabase()) return false;

    QSqlQuery query(rules_DB);
    query.prepare("UPDATE RULES_SET1 SET healingAllowed = :val WHERE rulesID = 111");
    query.bindValue(":val", value ? 1 : 0);

    if (!query.exec()) {
        qDebug() << "Update healingAllowed failed:" << query.lastError().text();
        return false;
    }

    return true;
}

bool database::getBuffingRule()
{
    if (!openDatabase()) return false;

    QSqlQuery query(rules_DB);
    if (!query.exec("SELECT buffingAllowed FROM RULES_SET1 WHERE rulesID=111")) {
        qDebug() << "Read buffingAllowed failed:" << query.lastError().text();
        return false;
    }

    if (query.next()) {
        return query.value(0).toBool();
    }

    return false;  // default false if not found
}

bool database::setBuffingRule(bool value)
{
    if (!openDatabase()) return false;

    QSqlQuery query(rules_DB);
    query.prepare("UPDATE RULES_SET1 SET buffingAllowed = :val WHERE rulesID = 111");
    query.bindValue(":val", value ? 1 : 0);

    if (!query.exec()) {
        qDebug() << "Update buffingAllowed failed:" << query.lastError().text();
        return false;
    }

    return true;
}

bool database::getPPRule()
{
    if (!openDatabase()) return false;

    QSqlQuery query(rules_DB);
    if (!query.exec("SELECT PPSystem FROM RULES_SET1 WHERE rulesID=111")) {
        qDebug() << "Read PPSystem failed:" << query.lastError().text();
        return false;
    }

    if (query.next()) {
        return query.value(0).toBool();
    }

    return false;  // default false if not found
}

bool database::setPPRule(bool value)
{
    if (!openDatabase()) return false;

    QSqlQuery query(rules_DB);
    query.prepare("UPDATE RULES_SET1 SET PPSystem = :val WHERE rulesID = 111");
    query.bindValue(":val", value ? 1 : 0);

    if (!query.exec()) {
        qDebug() << "Update PPSystem failed:" << query.lastError().text();
        return false;
    }

    return true;
}
