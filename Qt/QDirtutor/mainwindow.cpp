#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QDir dir;
    foreach (QFileInfo var,dir.drives()) {
        ui->comboBox->addItem(var.absoluteFilePath());
    }
    QDir dir_2("D:/");
    foreach (QFileInfo var,dir_2.entryInfoList()) {
        if(var.isDir())     ui->listWidget->addItem("Dir : " + var.absoluteFilePath());
        if(var.isFile())    ui->listWidget->addItem("file : " + var.absoluteFilePath());
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QDir dir3("D:/new");
    if(dir3.exists())   QMessageBox::information(this,"title","ada");
    else{
        dir3.mkdir("D:/new");
        QMessageBox::information(this,"title","dibuat");
    }

}
