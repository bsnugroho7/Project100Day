/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextBrowser *textNamaBarang;
    QTextBrowser *textListNamaBarang;
    QLabel *label;
    QLCDNumber *lcdTotal;
    QTextEdit *editKodeBarang;
    QTextEdit *editJumlahBarang;
    QPushButton *buttonInput;
    QTextBrowser *textListHargaBarang;
    QTextBrowser *textListJumlahBarang;
    QTextBrowser *textListTotalBarang;
    QLCDNumber *lcdBarang;
    QPushButton *buttonClear;
    QLabel *labelJumlah;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(885, 472);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textNamaBarang = new QTextBrowser(centralwidget);
        textNamaBarang->setObjectName(QString::fromUtf8("textNamaBarang"));
        textNamaBarang->setGeometry(QRect(320, 70, 201, 61));
        QFont font;
        font.setPointSize(22);
        textNamaBarang->setFont(font);
        textListNamaBarang = new QTextBrowser(centralwidget);
        textListNamaBarang->setObjectName(QString::fromUtf8("textListNamaBarang"));
        textListNamaBarang->setGeometry(QRect(10, 190, 221, 221));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 291, 51));
        QFont font1;
        font1.setPointSize(36);
        font1.setBold(false);
        font1.setWeight(50);
        label->setFont(font1);
        lcdTotal = new QLCDNumber(centralwidget);
        lcdTotal->setObjectName(QString::fromUtf8("lcdTotal"));
        lcdTotal->setGeometry(QRect(320, 10, 541, 51));
        lcdTotal->setDigitCount(9);
        editKodeBarang = new QTextEdit(centralwidget);
        editKodeBarang->setObjectName(QString::fromUtf8("editKodeBarang"));
        editKodeBarang->setGeometry(QRect(10, 70, 291, 31));
        editJumlahBarang = new QTextEdit(centralwidget);
        editJumlahBarang->setObjectName(QString::fromUtf8("editJumlahBarang"));
        editJumlahBarang->setGeometry(QRect(10, 100, 291, 31));
        buttonInput = new QPushButton(centralwidget);
        buttonInput->setObjectName(QString::fromUtf8("buttonInput"));
        buttonInput->setGeometry(QRect(220, 140, 80, 22));
        textListHargaBarang = new QTextBrowser(centralwidget);
        textListHargaBarang->setObjectName(QString::fromUtf8("textListHargaBarang"));
        textListHargaBarang->setGeometry(QRect(240, 190, 201, 221));
        textListJumlahBarang = new QTextBrowser(centralwidget);
        textListJumlahBarang->setObjectName(QString::fromUtf8("textListJumlahBarang"));
        textListJumlahBarang->setGeometry(QRect(450, 190, 201, 221));
        textListTotalBarang = new QTextBrowser(centralwidget);
        textListTotalBarang->setObjectName(QString::fromUtf8("textListTotalBarang"));
        textListTotalBarang->setGeometry(QRect(660, 190, 201, 221));
        lcdBarang = new QLCDNumber(centralwidget);
        lcdBarang->setObjectName(QString::fromUtf8("lcdBarang"));
        lcdBarang->setGeometry(QRect(600, 70, 261, 61));
        lcdBarang->setDigitCount(7);
        buttonClear = new QPushButton(centralwidget);
        buttonClear->setObjectName(QString::fromUtf8("buttonClear"));
        buttonClear->setGeometry(QRect(659, 140, 201, 22));
        labelJumlah = new QLabel(centralwidget);
        labelJumlah->setObjectName(QString::fromUtf8("labelJumlah"));
        labelJumlah->setGeometry(QRect(560, 70, 31, 61));
        labelJumlah->setFont(font);
        labelJumlah->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(530, 80, 31, 41));
        QFont font2;
        font2.setPointSize(15);
        label_3->setFont(font2);
        label_3->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 170, 71, 20));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(320, 170, 31, 20));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(530, 170, 41, 20));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(750, 170, 31, 20));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(320, 10, 191, 51));
        QFont font3;
        font3.setFamily(QString::fromUtf8("LCD"));
        font3.setPointSize(31);
        label_7->setFont(font3);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(2, 99, 255);"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 885, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(editKodeBarang, editJumlahBarang);
        QWidget::setTabOrder(editJumlahBarang, buttonInput);
        QWidget::setTabOrder(buttonInput, textListNamaBarang);
        QWidget::setTabOrder(textListNamaBarang, textListJumlahBarang);
        QWidget::setTabOrder(textListJumlahBarang, textNamaBarang);
        QWidget::setTabOrder(textNamaBarang, buttonClear);
        QWidget::setTabOrder(buttonClear, textListHargaBarang);
        QWidget::setTabOrder(textListHargaBarang, textListTotalBarang);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        textNamaBarang->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:22pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Nama Barang</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "MESIN KASIR", nullptr));
        editKodeBarang->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Kode Barang</span></p></body></html>", nullptr));
        editJumlahBarang->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Jumlah</span></p></body></html>", nullptr));
        buttonInput->setText(QCoreApplication::translate("MainWindow", "Input", nullptr));
        buttonClear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        labelJumlah->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Nama Barang", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Harga", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Quantity", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Total", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "TOTAL : Rp", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
