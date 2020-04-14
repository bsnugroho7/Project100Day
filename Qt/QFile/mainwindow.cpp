#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QFileDialog>
#include <QDir>

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


void MainWindow::on_pushButton_clicked()
{
    QFile file1("D:/#BELAJAR/Github/Project100Day/Qt/QFile/coba.txt");
    if(!file1.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::information(this,"Judul","Ga Kebuka!");
    }
    QTextStream Out(&file1);
    QString text = ui->plainTextEdit->toPlainText();
    Out<<text;
    file1.flush();
    file1.close();
}

void MainWindow::on_pushButton_2_clicked()
{
    QString filter = "all files(*.*) ;; text File(*.txt) ;; Gambar(*.cpp)";
    QString filename = QFileDialog::getOpenFileName(this,"Open File","D://");
    QFile file1(filename);

    if(!file1.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::information(this,"Judul","Ga Kebuka!");
    }

    QTextStream In(&file1);
    QString text = In.readAll();
    ui->plainTextEdit->setPlainText(text);
    file1.close();
}
