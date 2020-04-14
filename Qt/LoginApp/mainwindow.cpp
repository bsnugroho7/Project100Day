#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/img/img/Elins.png");
    int W= ui->label_pic->width();
    int H= ui->label_pic->height();
    ui->label_pic->setPixmap(pix.scaled(W,H,Qt::KeepAspectRatio));
    ui->statusbar->addPermanentWidget(ui->label_3,1);
    ui->statusbar->addPermanentWidget(ui->progressBar,3);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString username,password;
    username=ui->lineEdit_User->text();
    password=ui->lineEdit_Pass->text();
    if(username=="Test"&& password=="Test"){
        ui->statusbar->showMessage("Login Bener",3000);
        ui->label_3->setText("Login Bener");
//        QMessageBox::information(this,"Login","Login Sukses Gan");
//        hide();
//        secondDialog= new seeDialog(this);
//        secondDialog->show();
    }

    else
        ui->statusbar->showMessage("SALAH WOY",3000);
        ui->label_3->setText("Login Salah");
//        QMessageBox::warning(this,"Login","User dan pass salah!");
}
