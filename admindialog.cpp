#include "admindialog.h"
#include "ui_admindialog.h"
#include <QTextStream>

AdminDialog::AdminDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminDialog)
{
    ui->setupUi(this);
    ui->invalidLabel->hide();
    loginValid = false;

}

AdminDialog::~AdminDialog()
{
    delete ui;
}

void AdminDialog::on_pushButton_clicked()
{
    QString username = "administrator";
    QString password = "password";

    if(ui->userLineEdit->text() == username && ui->passLineEdit->text() == password)
    {
        isTrue();
        close();

    }
    else
    {
        ui->invalidLabel->show();
    }
}

void AdminDialog::isTrue()
{
    loginValid = true;
}

bool AdminDialog::getLogin()
{
    return loginValid;
}
