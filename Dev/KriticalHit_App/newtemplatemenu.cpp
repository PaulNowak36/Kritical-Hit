#include "newtemplatemenu.h"
#include "ui_newtemplatemenu.h"

newTemplateMenu::newTemplateMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::newTemplateMenu)
{
    ui->setupUi(this);

    ui->defaultStyle_Button->setProperty("class", "templateButton");
    ui->customStyle_Button->setProperty("class", "templateButton");
    ui->quit_Button->setProperty("class", "templateButton");

    ui->pokemon_Button->setProperty("class", "templateButton");
    ui->DGQ_Button->setProperty("class", "templateButton");
    ui->FF_Button->setProperty("class", "templateButton");
    ui->return_Button->setProperty("class", "templateButton");
    ui->quit_Button_2->setProperty("class", "templateButton");
}

newTemplateMenu::~newTemplateMenu()
{
    delete ui;
}


void newTemplateMenu::on_quit_Button_clicked()
{
    emit MainMenuClicked();
}


void newTemplateMenu::on_defaultStyle_Button_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void newTemplateMenu::on_return_Button_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void newTemplateMenu::on_quit_Button_2_clicked()
{
    emit MainMenuClicked();
}

