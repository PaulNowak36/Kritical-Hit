#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "data.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    data::setFullPath(QDir().currentPath() + "/Rules.db");
    data::openDatabase();

    ui->stackedWidget->insertWidget(1, &_rulesInfo);
    ui->stackedWidget->insertWidget(2, &_testInfo);

    connect(&_rulesInfo, SIGNAL(rulesConfirmed()), this, SLOT(moveMainMenu()));
    connect(&_testInfo, SIGNAL(returnMenu()), this, SLOT(moveMainMenu()));
}


MainWindow::~MainWindow()
{
    delete ui;
}

/*QSqlDatabase MainWindow::getDatabase()
{
    return DB_Connection;
}

void MainWindow::handleDatabaseCall()
{
    getDatabaseInfo(openDatabase());
}*/

void MainWindow::on_rules_Button_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_test_Button_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::moveMainMenu()
{
    ui->stackedWidget->setCurrentIndex(0);
    //DB_Connection.close();
    data::closeDatabase();
}

/*

QSqlQuery MainWindow::openDatabase()
{
    DB_Connection.open();
    QSqlDatabase::database().transaction();
    QSqlQuery query(DB_Connection);
    return query;
}

void MainWindow::getDatabaseInfo(QSqlQuery query)
{
    query.prepare("SELECT * FROM RULES_SET");

    if (!query.exec()) {
        qDebug() << "Data retrieval failed: " << query.lastError().text();
        return;
    }

    if (query.next()) {
        // Retrieving each column's value
        QString ID = query.value("ID").toString();
        bool R1 = query.value("RULE1").toBool();
        QString Rule1 = R1 ? "true" : "false";

        // Debug Output
        qDebug() << "Rule found!";
        qDebug() << "ID:" << ID;
        qDebug() << "Rule 1 activated:" << Rule1;
    }

}*/

