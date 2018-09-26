/********************************************************************************
** Form generated from reading UI file 'admindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINDIALOG_H
#define UI_ADMINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AdminDialog
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLineEdit *userLineEdit;
    QLineEdit *passLineEdit;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *invalidLabel;

    void setupUi(QDialog *AdminDialog)
    {
        if (AdminDialog->objectName().isEmpty())
            AdminDialog->setObjectName(QStringLiteral("AdminDialog"));
        AdminDialog->resize(303, 152);
        pushButton = new QPushButton(AdminDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(210, 110, 75, 23));
        label = new QLabel(AdminDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 211, 21));
        userLineEdit = new QLineEdit(AdminDialog);
        userLineEdit->setObjectName(QStringLiteral("userLineEdit"));
        userLineEdit->setGeometry(QRect(70, 40, 113, 20));
        passLineEdit = new QLineEdit(AdminDialog);
        passLineEdit->setObjectName(QStringLiteral("passLineEdit"));
        passLineEdit->setGeometry(QRect(70, 70, 113, 20));
        passLineEdit->setEchoMode(QLineEdit::Password);
        label_2 = new QLabel(AdminDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 40, 51, 16));
        label_3 = new QLabel(AdminDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 70, 51, 16));
        invalidLabel = new QLabel(AdminDialog);
        invalidLabel->setObjectName(QStringLiteral("invalidLabel"));
        invalidLabel->setGeometry(QRect(210, 50, 81, 16));

        retranslateUi(AdminDialog);

        QMetaObject::connectSlotsByName(AdminDialog);
    } // setupUi

    void retranslateUi(QDialog *AdminDialog)
    {
        AdminDialog->setWindowTitle(QApplication::translate("AdminDialog", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("AdminDialog", "Enter", nullptr));
        label->setText(QApplication::translate("AdminDialog", "Please log in for the administrator panel.", nullptr));
        passLineEdit->setInputMask(QString());
        label_2->setText(QApplication::translate("AdminDialog", "Username", nullptr));
        label_3->setText(QApplication::translate("AdminDialog", "Password", nullptr));
        invalidLabel->setText(QApplication::translate("AdminDialog", "Invalid login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminDialog: public Ui_AdminDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINDIALOG_H
