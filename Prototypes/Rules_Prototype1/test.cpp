#include "test.h"
#include "ui_test.h"
#include "data.h"

Test::Test(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Test)
{
    ui->setupUi(this);
}

Test::~Test()
{
    delete ui;
}

void Test::showEvent(QShowEvent *event)
{
    QWidget::showEvent(event);

    bool rule1 = data::getRule1();
    ui->pushButton_3->setVisible(rule1);  // hides if false, shows if true
}

void Test::on_return_Button_clicked()
{
    data::closeDatabase();  // close DB here
    emit returnMenu();
}
