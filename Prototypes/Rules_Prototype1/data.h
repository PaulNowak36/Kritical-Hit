#ifndef DATA_H
#define DATA_H
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDir>
#include <utility>
#include <QDebug>


class data
{

protected:
    QSqlDatabase rules_DB;
    QSqlQuery db_query;
    QDir _databasePath;
    QString _fullPath;

public:
    data();
    data(QString);

    void setFullPath(QString);
    QString getFullPath();

    void setUpDatabase();



};

#endif // DATA_H
