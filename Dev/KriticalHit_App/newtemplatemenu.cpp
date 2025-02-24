#include "newtemplatemenu.h"
#include "ui_newtemplatemenu.h"
#include <QDebug>

newTemplateMenu::newTemplateMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::newTemplateMenu)
{
    ui->setupUi(this);

    ui->stackedWidget2->setCurrentIndex(0);
    ui->stackedWidget2->insertWidget(4, &_TempMainInfo);

    // Print the current index of stackedWidget2
    qDebug() << "Current stackedWidget2 index:" << ui->stackedWidget2->currentIndex();

    ui->quit_Button->setIcon(QIcon("C:/Users/PaulNOWAK/Desktop/Algosup/Moonshot Project/Kritical-Hit/Dev/KriticalHit_App/Images/remove.png"));
    ui->quit_Button_2->setIcon(QIcon("C:/Users/PaulNOWAK/Desktop/Algosup/Moonshot Project/Kritical-Hit/Dev/KriticalHit_App/Images/remove.png"));
    ui->quit_Button_3->setIcon(QIcon("C:/Users/PaulNOWAK/Desktop/Algosup/Moonshot Project/Kritical-Hit/Dev/KriticalHit_App/Images/remove.png"));
    ui->quit_Button_4->setIcon(QIcon("C:/Users/PaulNOWAK/Desktop/Algosup/Moonshot Project/Kritical-Hit/Dev/KriticalHit_App/Images/remove.png"));

    ui->defaultStyle_Button->setProperty("class", "templateButton");
    ui->customStyle_Button->setProperty("class", "templateButton");
    ui->quit_Button->setProperty("class", "templateButton");

    ui->pokemon_Button->setProperty("class", "templateButton");
    ui->DGQ_Button->setProperty("class", "templateButton");
    ui->FF_Button->setProperty("class", "templateButton");
    ui->return_Button->setProperty("class", "templateButton");
    ui->quit_Button_2->setProperty("class", "templateButton");

    ui->TurnBasedRPG_Button->setProperty("class", "templateButton");
    ui->ActiveTimeRPG_Button->setProperty("class", "templateButton");
    ui->return_Button_2->setProperty("class", "templateButton");
    ui->quit_Button_3->setProperty("class", "templateButton");

    ui->TurnBasedRPG_Definition->setProperty("class", "labelDefinition");
    ui->ActiveTimeRPG_Definition->setProperty("class", "labelDefinition");
}

newTemplateMenu::~newTemplateMenu()
{
    delete ui;
}


void newTemplateMenu::on_quit_Button_clicked()
{
    emit MainMenuClicked();
    ui->stackedWidget2->setCurrentIndex(0);
}


void newTemplateMenu::on_defaultStyle_Button_clicked()
{
    ui->stackedWidget2->setCurrentIndex(1);
}


void newTemplateMenu::on_return_Button_clicked()
{
    ui->stackedWidget2->setCurrentIndex(0);
}


void newTemplateMenu::on_quit_Button_2_clicked()
{
    emit MainMenuClicked();
    ui->stackedWidget2->setCurrentIndex(0);
}


void newTemplateMenu::on_customStyle_Button_clicked()
{
    ui->stackedWidget2->setCurrentIndex(2);
}


void newTemplateMenu::on_quit_Button_3_clicked()
{
    emit MainMenuClicked();
    ui->stackedWidget2->setCurrentIndex(0);
}


void newTemplateMenu::on_return_Button_2_clicked()
{
    ui->stackedWidget2->setCurrentIndex(0);
}


void newTemplateMenu::on_TurnBasedRPG_Button_clicked()
{
    ui->stackedWidget2->setCurrentIndex(3);
}


void newTemplateMenu::on_quit_Button_4_clicked()
{
    emit MainMenuClicked();
    ui->stackedWidget2->setCurrentIndex(0);
}


void newTemplateMenu::on_return_Button_3_clicked()
{
    ui->stackedWidget2->setCurrentIndex(2);
}


void newTemplateMenu::on_pokemon_Button_clicked()
{
    ui->stackedWidget2->setCurrentIndex(4);
}


