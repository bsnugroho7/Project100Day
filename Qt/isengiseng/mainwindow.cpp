#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>

int angkaA=0,angkaB=0;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap gambar(":/img/1200px-BNI_logo.svg.png");
    int panjang=ui->label_2->width();
    int lebar=ui->label_2->height();
    ui->label_2->setPixmap(gambar.scaled(panjang,lebar,Qt::KeepAspectRatio));
//        ui->label_pic->setPixmap(pix.scaled(W,H,Qt::KeepAspectRatio));

}

MainWindow::~MainWindow()
{
    delete ui;
}

//TAMBAH A
void MainWindow::on_pushButton_4_clicked()
{
    angkaA++;
    ui->lcdA->display(angkaA);
}

//KURANG A
void MainWindow::on_pushButton_5_clicked()
{
    angkaA--;
    ui->lcdA->display(angkaA);
}

//TAMBAH B
void MainWindow::on_pushButton_2_clicked()
{
    angkaB++;
    ui->lcdA_2->display(angkaB);
}

void MainWindow::on_pushButton_3_clicked()
{
    angkaB--;
    ui->lcdA_2->display(angkaB);
}

void MainWindow::on_pushButton_clicked()
{
    angkaB=0;
    angkaA=0;
    ui->lcdA->display(angkaA);
    ui->lcdA_2->display(angkaB);
}
