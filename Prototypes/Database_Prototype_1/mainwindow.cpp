#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->Update_Button, &QPushButton::clicked, this, &MainWindow::on_Update_Button_clicked);

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


/*void MainWindow::on_pushButton_clicked()
{
    QString name = "Rod-Rang";

    int attValue = 40;
    int defValue = 25;
    int speValue = 70;
    int hpValue = 60;

    QString skill1 = "Fireball";
    QString skill2 = "Thunder";
    QString skill3 = "Freeze";

    QString spec_Abi = "Fire_Resistance";

    QString elem = "Fire";

    ui->characterEdit->setPlainText(name);
    ui->att_Edit->setPlainText(QString::number(attValue));
    ui->def_Edit->setPlainText(QString::number(defValue));
    ui->spe_Edit->setPlainText(QString::number(speValue));
    ui->hp_Edit->setPlainText(QString::number(hpValue));
    ui->skill_Edit->setPlainText(skill1);
    ui->skill_Edit_2->setPlainText(skill2);
    ui->skill_Edit_3->setPlainText(skill3);
    ui->specialAbility_Edit->setPlainText(spec_Abi);
    ui->elementEdit->setPlainText(elem);

    qDebug() << QSqlDatabase::drivers();


}*/


void MainWindow::on_Insert_Button_clicked()
{
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
    qDebug() << "PINGAS";

    if (!DB_Connection.isOpen()) {
        qDebug() << "Database connection is not open.";
        return;
    }

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

