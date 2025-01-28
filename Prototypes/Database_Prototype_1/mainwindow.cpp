#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    disconnect(ui->Insert_Button, nullptr, nullptr, nullptr);
    disconnect(ui->Update_Button, nullptr, nullptr, nullptr);
    disconnect(ui->Delete_Button, nullptr, nullptr, nullptr);

    connect(ui->Insert_Button, &QPushButton::clicked, this, &MainWindow::on_Insert_Button_clicked);
    connect(ui->Update_Button, &QPushButton::clicked, this, &MainWindow::on_Update_Button_clicked);
    connect(ui->Delete_Button, &QPushButton::clicked, this, &MainWindow::on_Delete_Button_clicked);


    QDir databasePath;
    QString path = databasePath.currentPath()+"/Character.db";

    qDebug() << path;
    //qDebug() << QSqlDatabase::drivers();// List of available drivers
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

    qDebug() << "Update Button object name:" << ui->Update_Button->objectName();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Insert_Button_clicked()
{
    qDebug() << "Insert Button Clicked!";

    DB_Connection.open();
    QSqlDatabase::database().transaction();

    QSqlQuery QueryInsertData(DB_Connection);
    QueryInsertData.prepare("INSERT INTO CHARACTER(NAME,DEF,SPE,HP,SKILLS,ELEMENT,SPECIAL_HABILITY,ATT) VALUES(:NAME,:DEF,:SPE,:HP,:SKILLS,:ELEMENT,:SPECIAL_HABILITY,:ATT)");

    QueryInsertData.bindValue(":NAME",ui->characterEdit->toPlainText());
    QueryInsertData.bindValue(":DEF",ui->def_Edit->toPlainText());
    QueryInsertData.bindValue(":SPE",ui->spe_Edit->toPlainText());
    QueryInsertData.bindValue(":HP",ui->hp_Edit->toPlainText());
    QString skills = ui->skill_Edit->toPlainText() + "," +
                     ui->skill_Edit_2->toPlainText() + "," +
                     ui->skill_Edit_3->toPlainText();
    QueryInsertData.bindValue(":SKILLS", skills);
    QueryInsertData.bindValue(":ELEMENT",ui->elementEdit->toPlainText());
    QueryInsertData.bindValue(":SPECIAL_HABILITY",ui->specialAbility_Edit->toPlainText());
    QueryInsertData.bindValue(":ATT",ui->att_Edit->toPlainText());

    if (QueryInsertData.exec()) {
        QSqlDatabase::database().commit();
        qDebug() << "Data inserted successfully!";
    } else {
        QSqlDatabase::database().rollback();
        qDebug() << "Insert failed, transaction rolled back: " << QueryInsertData.lastError();
    }
    DB_Connection.close();
}

void MainWindow::on_Update_Button_clicked()
{
    qDebug() << "Update Button Clicked!";

    /*if (!DB_Connection.isOpen()) {
        qDebug() << "Database connection is not open.";
        return;
    }*/

    DB_Connection.open();
    QSqlDatabase::database().transaction();

    QSqlQuery QueryInsertData(DB_Connection);
    QueryInsertData.prepare("UPDATE CHARACTER SET DEF=:DEF,SPE=:SPE,HP=:HP,SKILLS=:SKILLS,ELEMENT=:ELEMENT,SPECIAL_HABILITY=:SPECIAL_HABILITY,ATT=:ATT WHERE NAME=:NAME");

    QueryInsertData.bindValue(":DEF",ui->def_Edit->toPlainText());
    QueryInsertData.bindValue(":SPE",ui->spe_Edit->toPlainText());
    QueryInsertData.bindValue(":HP",ui->hp_Edit->toPlainText());
    QString updatedSkills = ui->skill_Edit->toPlainText() + "," +
                     ui->skill_Edit_2->toPlainText() + "," +
                     ui->skill_Edit_3->toPlainText();
    QueryInsertData.bindValue(":SKILLS", updatedSkills);
    QueryInsertData.bindValue(":ELEMENT",ui->elementEdit->toPlainText());
    QueryInsertData.bindValue(":SPECIAL_HABILITY",ui->specialAbility_Edit->toPlainText());
    QueryInsertData.bindValue(":ATT",ui->att_Edit->toPlainText());
    QueryInsertData.bindValue(":NAME",ui->characterEdit->toPlainText());

    if (QueryInsertData.exec()) {
        QSqlDatabase::database().commit();
        qDebug() << "Data updated successfully!";
    } else {
        QSqlDatabase::database().rollback();
        qDebug() << "Update failed, transaction rolled back: " << QueryInsertData.lastError();
    }
    DB_Connection.close();
}


void MainWindow::on_Delete_Button_clicked()
{
    qDebug() << "Delete Button Clicked!";

    /*if (!DB_Connection.isOpen()) {
        qDebug() << "Database connection is not open.";
        return;
    }*/

    DB_Connection.open();
    QSqlDatabase::database().transaction();

    QSqlQuery QueryInsertData(DB_Connection);
    QueryInsertData.prepare("DELETE FROM CHARACTER WHERE NAME=:NAME");
    QueryInsertData.bindValue(":NAME",ui->characterEdit->toPlainText());

    if (QueryInsertData.exec()) {
        QSqlDatabase::database().commit();
        qDebug() << "Data deleted successfully!";
    } else {
        QSqlDatabase::database().rollback();
        qDebug() << "Delete failed, transaction rolled back: " << QueryInsertData.lastError();
    }
    DB_Connection.close();
}

