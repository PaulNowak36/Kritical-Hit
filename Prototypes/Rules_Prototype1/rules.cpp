#include "rules.h"
#include "ui_rules.h"
#include <QDebug>

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
{// the signal will be emitted every time the Rules widget is shown in the QStackedWidget
    QWidget::showEvent(event); // Call base implementation
    emit databaseCalled();
}

void Rules::on_Confirm_Button_clicked()
{

    if(ui->checkBox->isChecked())
    {
        qDebug() << "YEAH ITS CHECKED !!!";
    } else {
        qDebug() << "NO ITS NOT !!!";
    }
    emit rulesConfirmed();
}

