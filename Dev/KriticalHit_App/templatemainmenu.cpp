#include "templatemainmenu.h"
#include "ui_templatemainmenu.h"
#include <QSignalSpy>
#include <QDebug>

TemplateMainMenu::TemplateMainMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TemplateMainMenu)
{
    ui->setupUi(this);
    ui->stackedWidget3->insertWidget(1, &_simInfo);

    connect(&_simInfo, SIGNAL(battleFinished()), this, SLOT(moveTemplateMenu()));
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
    ui->stackedWidget3->setCurrentIndex(1);
}

