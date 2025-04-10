#include "data.h"

data::data()
{
    setFullPath(_databasePath.currentPath()+"/Rules.db");
}

data::data(QString entirePath)
    : _fullPath(entirePath){}

void data::setFullPath(QString bigPath)     {_fullPath = bigPath;}

QString data::getFullPath()   {return _fullPath;}

void data::setUpDatabase()
{
    qDebug() << _fullPath;
    rules_DB = QSqlDatabase::addDatabase("QSQLITE");
    rules_DB.setDatabaseName(_fullPath);
    if(rules_DB.open())
    {
        qDebug() << "Rules Database is connected.";
    }
    else
    {
        qDebug() << "Rules Database is not connected.";
        qDebug() << "Error : " << rules_DB.lastError();
    }
}
