#include "mainwindow.h"
#include "ui_mainwindow.h"

float angka1,angka2,total;
float angka[100];
int operasi[10];
QString simpan="";
QString tanda="";
int i=0,j=0;

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
    angka1 = ui->num1->text().toFloat();
    angka2 = ui->num2->text().toFloat();
    total=angka1+angka2;
    ui->textBrowser->append(QString::number(angka1));
    ui->textBrowser->insertPlainText("+");
    ui->textBrowser->insertPlainText(QString::number(angka2));
    ui->textBrowser->insertPlainText("=");
    ui->textBrowser->insertPlainText(QString::number(total));
    ui->lcdNumber->display(QString::number(total));
}


void MainWindow::on_KurangButton_clicked()
{
    angka1 = ui->num1->text().toFloat();
    angka2 = ui->num2->text().toFloat();
    total=angka1-angka2;
    ui->textBrowser->append(QString::number(angka1));
    ui->textBrowser->insertPlainText("-");
    ui->textBrowser->insertPlainText(QString::number(angka2));
    ui->textBrowser->insertPlainText("=");
    ui->textBrowser->insertPlainText(QString::number(total));
    ui->lcdNumber->display(QString::number(total));
}

void MainWindow::on_KaliButton_clicked()
{
    angka1 = ui->num1->text().toFloat();
    angka2 = ui->num2->text().toFloat();
    total=angka1*angka2;
    ui->textBrowser->append(QString::number(angka1));
    ui->textBrowser->insertPlainText("*");
    ui->textBrowser->insertPlainText(QString::number(angka2));
    ui->textBrowser->insertPlainText("=");
    ui->textBrowser->insertPlainText(QString::number(total));
    ui->lcdNumber->display(QString::number(total));
}

void MainWindow::on_BagiButton_clicked()
{
    angka1 = ui->num1->text().toFloat();
    angka2 = ui->num2->text().toFloat();
    total=angka1/angka2;
    ui->textBrowser->append(QString::number(angka1));
    ui->textBrowser->insertPlainText("/");
    ui->textBrowser->insertPlainText(QString::number(angka2));
    ui->textBrowser->insertPlainText("=");
    ui->textBrowser->insertPlainText(QString::number(total));
    ui->lcdNumber->display(QString::number(total));
}

void MainWindow::on_in1_clicked()
{
    angka[i]=1;
    ui->textBrowser->insertPlainText("1");
    i++;
}

void MainWindow::on_in2_clicked()
{
    angka[i]=2;
    ui->textBrowser->insertPlainText("2");
    i++;
}

void MainWindow::on_in3_clicked()
{
    angka[i]=3;
    ui->textBrowser->insertPlainText("3");
    i++;
}

void MainWindow::on_in4_clicked()
{
    angka[i]=4;
    ui->textBrowser->insertPlainText("4");
    i++;
}

void MainWindow::on_in5_clicked()
{
    angka[i]=5;
    ui->textBrowser->insertPlainText("5");
    i++;
}

void MainWindow::on_in6_clicked()
{
    angka[i]=6;
    ui->textBrowser->insertPlainText("6");
    i++;
}

void MainWindow::on_in7_clicked()
{
    angka[i]=7;
    ui->textBrowser->insertPlainText("7");
    i++;
}

void MainWindow::on_pushButton_8_clicked()
{
    angka[i]=8;
    ui->textBrowser->insertPlainText("8");
    i++;
}

void MainWindow::on_in9_clicked()
{
    angka[i]=9;
    ui->textBrowser->insertPlainText("9");
    i++;
}

void MainWindow::on_in0_clicked()
{
    angka[i]=0;
    ui->textBrowser->insertPlainText("0");
    i++;
}

void MainWindow::on_optim_clicked()
{
    for (int var = 0; var < i; var++) simpan+=QString::number(angka[var]);
    operasi[j]= simpan.toFloat();
    simpan="";
    tanda+='*';
    i=0;
    j++;
    ui->textBrowser->insertPlainText("*");
}

void MainWindow::on_opplus_clicked()
{
    for (int var = 0; var < i; var++) simpan+=QString::number(angka[var]);
    operasi[j]= simpan.toFloat();
    simpan="";
    tanda+='+';
    i=0;
    j++;
    ui->textBrowser->insertPlainText("+");
}

void MainWindow::on_opeq_clicked()
{
    float hasil;
    for (int var = 0; var < i; var++) simpan+=QString::number(angka[var]);
    operasi[j]= simpan.toFloat();
    simpan="";
    tanda+='+';
    i=0;
    j++;
    ui->textBrowser->insertPlainText("=");


    ui->lcdNumber->display(QString::number(operasi[1]));
    if(tanda.contains("+",Qt::CaseSensitive)) {
        hasil=operasi[1]+operasi[0];
        ui->textBrowser->insertPlainText(QString::number(hasil));
       }
    else ui->textBrowser->append("Gaada");
}
