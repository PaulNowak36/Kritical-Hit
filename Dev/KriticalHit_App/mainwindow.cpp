#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_loginButton_clicked()
{
    QString Username = ui -> username_Edit ->text();
    QString Password = ui -> password_Edit ->text();

    if (Username == "algoPaul" && Password == "IPlayPKMNGo")
    {
        QMessageBox::information(this, Username, "Login success.");
        ui->stackedWidget->setCurrentIndex(1);
    }
    else
    {
        QMessageBox::warning(this, Username, "Please enter valid username or password.");
    }
}

