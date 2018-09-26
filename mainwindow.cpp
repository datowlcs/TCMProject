#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "admindialog.h"
#include <QPixmap>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

//This is the constructor. Only put stuff in here that we need to show on the
//launch of the application. This should only be pictures, indexes, and read ins
//read in from a file should happen on launch as well as upload from db.

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /**********************************************************/
    // Big note: make sure to change the path for any picture/
    // database/source when changing computers. Not everyone is
    // going to be called "Nolan O" as a user on their computer
    /**********************************************************/
    QPixmap pix("C:/Users/Nolan O/Documents/TCMCollegeTour/sources/college.jpeg");
    ui->stackedWidget->setCurrentIndex(0);
    ui->mainPic_label->setPixmap(pix.scaled(300,300,Qt::KeepAspectRatio)); //can change 100 to the height/width by setting variables w = 100 h = 100
}

//Destructor. Nothing to see here.
MainWindow::~MainWindow()
{
    delete ui;
}

//Push button to first page, the main menu (college tour screen).
void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
//    QFile file("C:\\Users\\Nolan O\\Documents\\TCMCollegeTour\\sources\\College Campus Distances and Souvenirs.xlsx");

//    if(!file.open(QIODevice::ReadOnly))
//    {
//        QMessageBox::information(0, "Info:", file.errorString());
//    }

//    QTextStream in(&file);

//    ui->textBrowser->setText(in.readAll());

    //query database instead, this is a read in from file segment of code //
    //NONE OF THIS CODE ABOVE MATTERS, ONLY SERVES AS A READ IN IMPLEMENTATION//
}

//Push button for quitting the application on main screen (first page).
void MainWindow::on_pushButton_3_clicked()
{
    close();
}

//Push button for Admin login on the main screen (first page).
//This method creates an AdminDialog object, which creates a second window.
//If you ever want to make another window pop up (WHICH WE SHOULDN'T), we
//can make another by right clicking "TCMCollegeTour" project, clicking
//"Add New" ->QT->Designer Form Class-> select which dialog you want or
//main window. We really do not need more windows. Ask before making another.
void MainWindow::on_pushButton_4_clicked()
{
    //Creates the second window object
    AdminDialog adminLogin;

    //Sets the modal for the second object then executes it.
    adminLogin.setModal(true);
    adminLogin.exec();

    //THIS LOGIN VALIDATION WORKS. :)
    if(adminLogin.getLogin() == true)
    {
        ui->stackedWidget->setCurrentIndex(3);
    }
    else
    {
        QTextStream out(stdout);
        out << "Error updating index.";
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_backCollegeButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_backCollegeButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_5_clicked()
{
    ui->pushButton_5->setToolTip("This is the UCI Trip cool beans dude");
}
