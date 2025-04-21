#include "rulesmenu.h"
#include "ui_rulesmenu.h"

rulesMenu::rulesMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::rulesMenu)
{
    ui->setupUi(this);
}

rulesMenu::~rulesMenu()
{
    delete ui;
}

void rulesMenu::on_Confirm_Button_clicked()
{
    emit rulesConfirmed();
}

