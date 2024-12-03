#include "machineinfo.h"
#include "ui_machineinfo.h"

MachineInfo::MachineInfo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MachineInfo)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
}

MachineInfo::~MachineInfo()
{
    delete ui;
}

void MachineInfo::on_pushButton_4_clicked()
{
    emit HomeClicked();
}


void MachineInfo::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MachineInfo::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MachineInfo::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

