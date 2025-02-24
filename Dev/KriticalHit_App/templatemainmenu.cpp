#include "templatemainmenu.h"
#include "ui_templatemainmenu.h"
#include <QSignalSpy>
#include <QDebug>

TemplateMainMenu::TemplateMainMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TemplateMainMenu)
{
    ui->setupUi(this);
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
