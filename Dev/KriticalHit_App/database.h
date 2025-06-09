#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDir>
#include <QDebug>

/**
 * @brief The database class provides static methods to manage a rules database.
 *
 * It allows setting the database path, opening/closing the database,
 * and getting/setting specific rule values such as healing, buffing, and PP usage.
 */
class database
{
private:
    // Static members for the database and its file path
    static QSqlDatabase rules_DB;
    static QString fullPath;

public:
    // Constructor
    database();

    // Set the full file path of the database
    static void setFullPath(const QString &path);

    // Get the full file path of the database
    static QString getFullPath();

    // Open and close the database connection
    static bool openDatabase();
    static void closeDatabase();

    // Rule getter and setter for 'healing' rule
    static bool getHealingRule();
    static bool setHealingRule(bool);

    // Rule getter and setter for 'buffing' rule
    static bool getBuffingRule();
    static bool setBuffingRule(bool);

    // Rule getter and setter for 'PP' rule
    static bool getPPRule();
    static bool setPPRule(bool);

    // Getter and setter for all rules
    static QMap<QString, bool> getAllRules();
    static bool setAllRules(bool, bool, bool);
};

#endif // DATABASE_H
