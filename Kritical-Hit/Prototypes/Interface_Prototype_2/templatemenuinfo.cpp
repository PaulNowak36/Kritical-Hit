#include "templatemenuinfo.h"
#include "ui_templatemenuinfo.h"

TemplateMenuInfo::TemplateMenuInfo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TemplateMenuInfo)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
}

TemplateMenuInfo::~TemplateMenuInfo()
{
    delete ui;
}

void TemplateMenuInfo::on_pushButton_2_clicked()
{
    emit HomeClicked();
}


void TemplateMenuInfo::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void TemplateMenuInfo::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

