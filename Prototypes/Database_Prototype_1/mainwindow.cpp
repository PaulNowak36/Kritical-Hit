#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    qDebug() << QSqlDatabase::drivers();// List of available drivers


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
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


}

