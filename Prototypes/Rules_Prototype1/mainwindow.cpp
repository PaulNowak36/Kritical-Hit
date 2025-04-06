#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->insertWidget(1, &_rulesInfo);
    ui->stackedWidget->insertWidget(2, &_testInfo);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_rules_Button_clicked()
{
    ui->stackedWidget->setCurrentWidget(1);
}


void MainWindow::on_test_Button_clicked()
{
    ui->stackedWidget->setCurrentWidget(2);
}

