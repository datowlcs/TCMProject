#ifndef ADMINDIALOG_H
#define ADMINDIALOG_H

#include <QDialog>

namespace Ui {
class AdminDialog;
}

class AdminDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AdminDialog(QWidget *parent = nullptr);
    ~AdminDialog();
    void isTrue();
    bool getLogin();

private slots:
    void on_pushButton_clicked();

private:
    Ui::AdminDialog *ui;
    bool loginValid;
};

#endif // ADMINDIALOG_H
