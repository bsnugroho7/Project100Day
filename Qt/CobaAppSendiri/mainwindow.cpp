#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/img/C:/Users/BSNugroho/Documents/LOGO FUKURO 19.9.png");
    int W= ui->pixlabel->width();
    int H= ui->pixlabel->height();
    ui->pixlabel->setPixmap(pix.scaled(W,H,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_2_clicked()
{
    QString user,pass;
    user=ui->lineEdit_user->text();
    pass=ui->lineEdit_pass->text();
    if (user=="Tio"&&pass=="Tio")   QMessageBox::information(this,"Berhasil","Masokk Gan");
    else                            QMessageBox::warning(this,"GAGAL","Dih Salah");
}
