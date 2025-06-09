#include "rules.h"
#include "ui_rules.h"
#include "data.h"

Rules::Rules(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Rules)
{
    ui->setupUi(this);

}

Rules::~Rules()
{
    delete ui;
}

void Rules::showEvent(QShowEvent *event)
{
    QWidget::showEvent(event);
    bool rule1 = data::getRule1();
    ui->checkBox->setChecked(rule1);
}

void Rules::on_Confirm_Button_clicked()
{
    bool newValue = ui->checkBox->isChecked();
    data::setRule1(newValue);

    emit rulesConfirmed();  // this will return to main menu and close DB
}
