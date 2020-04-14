#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include <QIcon>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    ui->comboBox->addItem(QIcon(":/img/icon/book.ico"),"Mark");
//    ui->comboBox->addItem(QIcon(":/img/icon/Books.ico"),"Mark");
//    ui->comboBox->addItem(QIcon(":/img/icon/Communicate_1.ico"),"Mark");
//    ui->comboBox->addItem("Mark2");
    for(int i=0; i<10;i++){
        ui->comboBox->addItem(QIcon(":/img/icon/book.ico"),QString::number(i));
    }
    ui->comboBox->insertItem(3,"Hehehe");
}
MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this,"judul",QString::number(ui->comboBox->currentIndex()));
}
