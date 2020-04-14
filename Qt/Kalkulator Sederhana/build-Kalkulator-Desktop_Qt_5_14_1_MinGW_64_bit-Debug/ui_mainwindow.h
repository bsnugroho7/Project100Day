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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *num1;
    QPushButton *pushButton;
    QLineEdit *num2;
    QLabel *label;
    QPushButton *KurangButton;
    QPushButton *KaliButton;
    QPushButton *BagiButton;
    QTextBrowser *textBrowser;
    QLCDNumber *lcdNumber;
    QPushButton *in1;
    QPushButton *in2;
    QPushButton *in5;
    QPushButton *in4;
    QPushButton *in6;
    QPushButton *in3;
    QPushButton *pushButton_8;
    QPushButton *in7;
    QPushButton *in9;
    QPushButton *in0;
    QPushButton *opmin;
    QPushButton *opplus;
    QPushButton *optim;
    QPushButton *opdiv;
    QPushButton *opeq;
    QMenuBar *menubar;
    QMenu *menuKalkulator_Sederhana;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        num1 = new QLineEdit(centralwidget);
        num1->setObjectName(QString::fromUtf8("num1"));
        num1->setGeometry(QRect(180, 230, 91, 21));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(280, 270, 61, 21));
        num2 = new QLineEdit(centralwidget);
        num2->setObjectName(QString::fromUtf8("num2"));
        num2->setGeometry(QRect(180, 270, 91, 20));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 60, 271, 16));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        KurangButton = new QPushButton(centralwidget);
        KurangButton->setObjectName(QString::fromUtf8("KurangButton"));
        KurangButton->setGeometry(QRect(350, 230, 61, 21));
        KaliButton = new QPushButton(centralwidget);
        KaliButton->setObjectName(QString::fromUtf8("KaliButton"));
        KaliButton->setGeometry(QRect(280, 230, 61, 21));
        BagiButton = new QPushButton(centralwidget);
        BagiButton->setObjectName(QString::fromUtf8("BagiButton"));
        BagiButton->setGeometry(QRect(350, 270, 61, 21));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(180, 90, 261, 131));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush1);
        QBrush brush2(QColor(0, 255, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush3(QColor(255, 255, 220, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush3);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
        QBrush brush4(QColor(255, 255, 255, 128));
        brush4.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush4);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush4);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        textBrowser->setPalette(palette);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Century Gothic"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        textBrowser->setFont(font1);
        textBrowser->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CrossCursor)));
        textBrowser->setTabletTracking(false);
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(450, 90, 64, 23));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        QBrush brush5(QColor(0, 78, 181, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush5);
        QBrush brush6(QColor(16, 119, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush6);
        QBrush brush7(QColor(8, 98, 218, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush7);
        QBrush brush8(QColor(0, 39, 90, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush8);
        QBrush brush9(QColor(0, 52, 121, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush9);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        QBrush brush10(QColor(127, 166, 218, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush3);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
        QBrush brush11(QColor(0, 0, 0, 128));
        brush11.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush11);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush11);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush11);
#endif
        lcdNumber->setPalette(palette1);
        in1 = new QPushButton(centralwidget);
        in1->setObjectName(QString::fromUtf8("in1"));
        in1->setGeometry(QRect(180, 300, 61, 51));
        in2 = new QPushButton(centralwidget);
        in2->setObjectName(QString::fromUtf8("in2"));
        in2->setGeometry(QRect(250, 300, 61, 51));
        in5 = new QPushButton(centralwidget);
        in5->setObjectName(QString::fromUtf8("in5"));
        in5->setGeometry(QRect(250, 360, 61, 51));
        in4 = new QPushButton(centralwidget);
        in4->setObjectName(QString::fromUtf8("in4"));
        in4->setGeometry(QRect(180, 360, 61, 51));
        in6 = new QPushButton(centralwidget);
        in6->setObjectName(QString::fromUtf8("in6"));
        in6->setGeometry(QRect(320, 360, 61, 51));
        in3 = new QPushButton(centralwidget);
        in3->setObjectName(QString::fromUtf8("in3"));
        in3->setGeometry(QRect(320, 300, 61, 51));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(250, 420, 61, 51));
        in7 = new QPushButton(centralwidget);
        in7->setObjectName(QString::fromUtf8("in7"));
        in7->setGeometry(QRect(180, 420, 61, 51));
        in9 = new QPushButton(centralwidget);
        in9->setObjectName(QString::fromUtf8("in9"));
        in9->setGeometry(QRect(320, 420, 61, 51));
        in0 = new QPushButton(centralwidget);
        in0->setObjectName(QString::fromUtf8("in0"));
        in0->setGeometry(QRect(390, 420, 61, 51));
        opmin = new QPushButton(centralwidget);
        opmin->setObjectName(QString::fromUtf8("opmin"));
        opmin->setGeometry(QRect(460, 360, 61, 51));
        opplus = new QPushButton(centralwidget);
        opplus->setObjectName(QString::fromUtf8("opplus"));
        opplus->setGeometry(QRect(390, 360, 61, 51));
        optim = new QPushButton(centralwidget);
        optim->setObjectName(QString::fromUtf8("optim"));
        optim->setGeometry(QRect(390, 300, 61, 51));
        opdiv = new QPushButton(centralwidget);
        opdiv->setObjectName(QString::fromUtf8("opdiv"));
        opdiv->setGeometry(QRect(460, 300, 61, 51));
        opeq = new QPushButton(centralwidget);
        opeq->setObjectName(QString::fromUtf8("opeq"));
        opeq->setGeometry(QRect(460, 420, 61, 51));
        MainWindow->setCentralWidget(centralwidget);
        num1->raise();
        pushButton->raise();
        num2->raise();
        label->raise();
        KurangButton->raise();
        KaliButton->raise();
        BagiButton->raise();
        textBrowser->raise();
        lcdNumber->raise();
        in1->raise();
        in2->raise();
        in5->raise();
        in4->raise();
        in6->raise();
        in3->raise();
        pushButton_8->raise();
        in7->raise();
        in0->raise();
        opmin->raise();
        opplus->raise();
        optim->raise();
        opdiv->raise();
        opeq->raise();
        in9->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuKalkulator_Sederhana = new QMenu(menubar);
        menuKalkulator_Sederhana->setObjectName(QString::fromUtf8("menuKalkulator_Sederhana"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuKalkulator_Sederhana->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "KALKULATOR SEDERHANA", nullptr));
        KurangButton->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        KaliButton->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        BagiButton->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        in1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        in2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        in5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        in4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        in6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        in3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        in7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        in9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        in0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        opmin->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        opplus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        optim->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        opdiv->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        opeq->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        menuKalkulator_Sederhana->setTitle(QCoreApplication::translate("MainWindow", "Kalkulator Sederhana", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
