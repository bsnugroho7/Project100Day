/********************************************************************************
** Form generated from reading UI file 'seedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEEDIALOG_H
#define UI_SEEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_seeDialog
{
public:
    QLabel *label;

    void setupUi(QDialog *seeDialog)
    {
        if (seeDialog->objectName().isEmpty())
            seeDialog->setObjectName(QString::fromUtf8("seeDialog"));
        seeDialog->resize(300, 458);
        label = new QLabel(seeDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 130, 161, 151));

        retranslateUi(seeDialog);

        QMetaObject::connectSlotsByName(seeDialog);
    } // setupUi

    void retranslateUi(QDialog *seeDialog)
    {
        seeDialog->setWindowTitle(QCoreApplication::translate("seeDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("seeDialog", "Halo Gan", nullptr));
    } // retranslateUi

};

namespace Ui {
    class seeDialog: public Ui_seeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEEDIALOG_H
