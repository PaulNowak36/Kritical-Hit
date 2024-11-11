#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentWidget(ui->Login_Page);
    QPixmap pix("C:/Users/PaulNOWAK/Desktop/Algosup/Moonshot Project/Kritical-Hit/Prototypes/Interface_Prototype_1/Test_interface_1/RPG_ImageTest.png");
    int w = ui->label_Picture->width();
    int h = ui->label_Picture->height();
    ui->label_Picture->setPixmap(pix.scaled(w,h, Qt::KeepAspectRatio));

    int w3 = ui->label_Picture_3->width();
    int h3 = ui->label_Picture_3->height();
    ui->label_Picture_3->setPixmap(pix.scaled(w3,h3, Qt::KeepAspectRatio));

    QPixmap pm("C:/Users/PaulNOWAK/Desktop/Algosup/Moonshot Project/Kritical-Hit/Prototypes/Interface_Prototype_1/Test_interface_1/RPG_ImageTest2.png"); // <- path to image file
    ui->label_Picture2->setPixmap(pm);
    ui->label_Picture2->setScaledContents(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Main_Menu_Page);
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Login_Page);
}


void MainWindow::on_commandLinkButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Login_Page);
}


void MainWindow::on_toolButton_6_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Main_Menu_Page);
}


void MainWindow::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->RPG_Style_Page);
}


void MainWindow::on_toolButton_8_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Main_Menu_Page);
}


void MainWindow::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Template_Gallery_Main_Page);
}


void MainWindow::on_toolButton_7_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Main_Menu_Page);
}


void MainWindow::on_pushButton_9_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Template_Menu_Page);
}


void MainWindow::on_toolButton_10_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Main_Menu_Page);
}


void MainWindow::on_pushButton_24_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Template_Menu_Page);
}


void MainWindow::on_pushButton_7_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->RPG_Default_Style_Page);
}


void MainWindow::on_pushButton_27_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->RPG_Style_Page);
}


void MainWindow::on_pushButton_28_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->RPG_Style_Page);
}


void MainWindow::on_pushButton_20_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Login_Page);
}


void MainWindow::on_pushButton_29_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Template_Gallery_Template_Menu_Page);
}


void MainWindow::on_toolButton_12_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Template_Menu_Page);
}

void MainWindow::on_pushButton_6_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Rules_Menu_Page);
}



void MainWindow::on_pushButton_70_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Template_Menu_Page);
}


void MainWindow::on_pushButton_12_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Characters_Menu_Page);
}


void MainWindow::on_pushButton_34_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Template_Menu_Page);
}


void MainWindow::on_pushButton_33_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Template_Menu_Page);
}


void MainWindow::on_pushButton_32_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Template_Menu_Page);
}


void MainWindow::on_pushButton_23_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Template_Menu_Page);
}


void MainWindow::on_pushButton_31_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Template_Menu_Page);
}


void MainWindow::on_pushButton_13_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Stats_Menu_Page);
}


void MainWindow::on_pushButton_14_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Skills_Menu_Page);
}


void MainWindow::on_pushButton_19_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Statuses_Menu_Page);
}

