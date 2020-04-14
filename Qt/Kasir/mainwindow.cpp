#include "mainwindow.h"
#include "ui_mainwindow.h"


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

struct barang{
    QString kode[8]={"000","001","010","011","100","101","110","111"};
    int harga[8]={3000,5000,15000,100000,1000000,500000,1100000,300000};
    QString nama[8]={"sabun","sampo","Mouse","Stick","meja","kursi","Printer","kipas"};
}supermarket;

int totalbarang=0;

void MainWindow::on_buttonInput_clicked()
{
    QString jumlah      =ui->editJumlahBarang->toPlainText(),
            kodebarang  =ui->editKodeBarang->toPlainText();

    int     Ijumlah =jumlah.toUInt();
    for(int i=0;i<8;i++){
        if(kodebarang==supermarket.kode[i]){
            int sumHarga= supermarket.harga[i]*Ijumlah;
            totalbarang+=sumHarga;
            ui->labelJumlah->setText(jumlah);
            ui->lcdBarang->display(QString::number(sumHarga));
            ui->lcdTotal->display(QString::number(totalbarang));
            ui->textNamaBarang->setText(supermarket.nama[i]);
            //========================LIST=======================
            ui->textListNamaBarang->append(supermarket.nama[i]);
            ui->textListHargaBarang->append(QString::number(supermarket.harga[i]));
            ui->textListJumlahBarang->append(jumlah);
            ui->textListTotalBarang->append(QString::number(sumHarga));
        }
//        totalbarang=0;
    }
}
