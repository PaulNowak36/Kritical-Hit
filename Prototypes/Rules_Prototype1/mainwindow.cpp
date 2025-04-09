#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->insertWidget(1, &_rulesInfo);
    ui->stackedWidget->insertWidget(2, &_testInfo);

    connect(&_rulesInfo, SIGNAL(rulesConfirmed()), this, SLOT(moveMainMenu()));
    connect(&_testInfo, SIGNAL(returnMenu()), this, SLOT(moveMainMenu()));

    QDir databasePath;
    QString path = databasePath.currentPath()+"/Rules.db";

    qDebug() << path;
    DB_Connection = QSqlDatabase::addDatabase("QSQLITE");
    DB_Connection.setDatabaseName(path);
    if(DB_Connection.open())
    {
        qDebug() << "Character Database is connected.";
    }
    else
    {
        qDebug() << "Character Database is not connected.";
        qDebug() << "Error : " << DB_Connection.lastError();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

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
}

