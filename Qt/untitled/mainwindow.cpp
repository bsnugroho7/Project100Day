#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QListWidgetItem *item = new QListWidgetItem(QIcon(":/img/book.ico"),"Mark");
    ui->listWidget->addItem(item);
    QListWidgetItem *item1 = new QListWidgetItem(QIcon(":/img/Communicate_1.ico"),"Mark1");
    ui->listWidget->addItem(item1);
    QListWidgetItem *item2 = new QListWidgetItem(QIcon(":/img/Diagram.ico"),"Mark2");
    ui->listWidget->addItem(item2);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
//    QMessageBox::information(this,"hehe",ui->listWidget->currentItem()->text());
    ui->listWidget->currentItem()->setForeground(Qt::red);
}
