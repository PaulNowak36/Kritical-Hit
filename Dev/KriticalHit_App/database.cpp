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
    qDebug() << "DB path:" << database::getFullPath();

}

QString database::getFullPath()
{
    return fullPath;
}

bool database::openDatabase()
{
    if (!QFile::exists(fullPath)) {
        qDebug() << "❌ Database file does not exist at path:" << fullPath;
        return false;
    }

    // Check if connection is already set up and open
    if (rules_DB.isValid() && rules_DB.isOpen()) {
        qDebug() << "✅ Database is already open.";
        return true;
    }

    // If database connection hasn't been added yet, add it
    if (!rules_DB.isValid()) {
        rules_DB = QSqlDatabase::addDatabase("QSQLITE");
        rules_DB.setDatabaseName(fullPath);
    }

    // Attempt to open the database
    if (!rules_DB.open()) {
        qDebug() << "❌ Failed to open DB:" << rules_DB.lastError().text();
        return false;
    }

    // Check if the expected table exists
    if (!rules_DB.tables().contains("RULES_SET1")) {
        qDebug() << "❌ Table 'RULES_SET1' does not exist in the database!";
        return false;
    }

    qDebug() << "✅ DB opened successfully, table found.";
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

QMap<QString, bool> database::getAllRules()
{
    QMap<QString, bool> rules;

    if (!openDatabase()) return rules;

    QSqlQuery query(rules_DB);
    if (!query.exec("SELECT healingAllowed, buffingAllowed, PPSystem FROM RULES_SET1 WHERE rulesID=111")) {
        qDebug() << "Read all rules failed:" << query.lastError().text();
        return rules;
    }

    if (query.next()) {
        rules["healingAllowed"] = query.value(0).toBool();
        rules["buffingAllowed"] = query.value(1).toBool();
        rules["PPSystem"] = query.value(2).toBool();
    }

    return rules;
}

bool database::setAllRules(bool healing, bool buffing, bool pp)
{
    if (!openDatabase()) return false;

    QSqlQuery query(rules_DB);
    query.prepare("UPDATE RULES_SET1 SET healingAllowed = :heal, buffingAllowed = :buff, PPSystem = :pp WHERE rulesID = 111");
    query.bindValue(":heal", healing ? 1 : 0);
    query.bindValue(":buff", buffing ? 1 : 0);
    query.bindValue(":pp", pp ? 1 : 0);

    if (!query.exec()) {
        qDebug() << "Update all rules failed:" << query.lastError().text();
        return false;
    }

    return true;
}


