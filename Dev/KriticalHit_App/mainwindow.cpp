#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStorageInfo>
#include <QDebug>

void printRootDriveInfo() {
    QStorageInfo storage = QStorageInfo::root();

    qDebug() << storage.rootPath();
    if (storage.isReadOnly())
        qDebug() << "isReadOnly:" << storage.isReadOnly();

    qDebug() << "name:" << storage.name();
    qDebug() << "filesystem type:" << storage.fileSystemType();
    qDebug() << "size:" << storage.bytesTotal()/1024/1024 << "MB";
    qDebug() << "free space:" << storage.bytesAvailable()/1024/1024 << "MB";
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->logOut_Button->setIcon(QIcon("C:/Users/PaulNOWAK/Desktop/Algosup/Moonshot Project/Kritical-Hit/Dev/KriticalHit_App/Images/logout.png"));

    printRootDriveInfo();
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


void MainWindow::on_logOut_Button_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

