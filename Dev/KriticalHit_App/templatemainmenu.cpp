#include "templatemainmenu.h"
#include "ui_templatemainmenu.h"
#include <QSignalSpy>
#include <QDebug>

TemplateMainMenu::TemplateMainMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TemplateMainMenu)
{
    ui->setupUi(this);

    database::setFullPath(QDir().currentPath() + "/rules1.db");
    database::openDatabase();

    ui->stackedWidget3->insertWidget(1, &_simInfo);
    ui->stackedWidget3->insertWidget(2, &_rulesInfo);

    connect(&_simInfo, SIGNAL(battleFinished()), this, SLOT(moveTemplateMenu()));
    connect(&_rulesInfo, SIGNAL(rulesConfirmed()), this, SLOT(moveTemplateMenu()));

    ui->rules_Button->setProperty("class", "templateButton");
    ui->simulation_Button->setProperty("class", "templateButton");
    ui->logOut_Button2->setProperty("class", "templateButton");

    QPixmap vs("C:/Users/PaulNOWAK/Desktop/Algosup/Moonshot Project/Kritical-Hit/Dev/KriticalHit_App/Images/Vs.png"); // <- path to image file
    ui->vs_Label->setPixmap(vs);
    ui->vs_Label->setScaledContents(true);
}

TemplateMainMenu::~TemplateMainMenu()
{
    delete ui;
}

void TemplateMainMenu::on_logOut_Button2_clicked()
{
    qDebug() << "Logout button clicked! Attempting to emit signal...";

    QSignalSpy spy(this, &TemplateMainMenu::LoginMenuClicked); // Spy to track signal emissions

    emit LoginMenuClicked();
    qDebug() << "Signal emitted! Checking with QSignalSpy...";

    if (spy.count() > 0) {
        qDebug() << "Success: LoginMenuClicked() was emitted!";
    } else {
        qDebug() << "Error: Signal NOT emitted!";
    }

    ui->stackedWidget3->setCurrentIndex(0);
}

/*void TemplateMainMenu::on_logOut_Button2_2_clicked()
{
    ui->stackedWidget3->setCurrentIndex(1);
}*/

void TemplateMainMenu::moveTemplateMenu()
{
    ui->stackedWidget3->setCurrentIndex(0);
}


void TemplateMainMenu::on_simulation_Button_clicked()
{
    //ui->stackedWidget3->setCurrentIndex(1);

    if (ui->stackedWidget3->count() > 1 && ui->stackedWidget3->widget(1)) {
        ui->stackedWidget3->setCurrentIndex(1);
    } else {
        qDebug() << "ERROR: Page at index 1 is missing or null!";
    }
}


void TemplateMainMenu::on_rules_Button_clicked()
{
    ui->stackedWidget3->setCurrentIndex(2);
}

