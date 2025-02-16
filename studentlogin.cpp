#include "studentlogin.h"
#include "ui_studentlogin.h"
#include <QMessageBox>
#include <QDebug>
#include "welcomewindow.h"
#include <QPixmap>

WelcomeWindow *welcomeWindow;
Prashnottar::Prashnottar(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Prashnottar)
{
    ui->setupUi(this);
    //ui->error->hide();
        this->setWindowIcon(QIcon("C:/Users/ACER/Desktop/Prashnottar/assets/logo.png"));
    QPixmap logo("C:/Users/ACER/Desktop/Prashnottar/assets/logo.png");
    ui->logo3->setPixmap(logo.scaled(200,200,Qt::KeepAspectRatio));

    QPixmap id("C:/Users/ACER/Desktop/Prashnottar/assets/icons8-id-50.png");
    ui->idimg->setPixmap(id.scaled(40,40,Qt::KeepAspectRatio));

    QPixmap psd("C:/Users/ACER/Desktop/Prashnottar/assets/icons8-password-50.png");
    ui->psdimg->setPixmap(psd.scaled(40,40,Qt::KeepAspectRatio));

    QMessageBox messageIntro;
    messageIntro.resize(800,800);
    messageIntro.setStyleSheet(
        "QMessageBox {"
        "    background-color: #f0f0f0;"
        "    color: #333333;"
        "}"
        );

 this->setWindowTitle("Student Login");
}

Prashnottar::~Prashnottar()
{
    delete ui;
}


void Prashnottar::on_pushButton_clicked()
{
    
    close();
    
    studentDashboard->showMaximized();
}


void Prashnottar::on_pushButton_2_clicked()
{
    close();
    welcomeWindow = new WelcomeWindow();
    welcomeWindow->showMaximized();
}


void Prashnottar::on_pushButton_3_clicked()
{
    close();
    registrationWindow = new studentRegistration();
    registrationWindow->showMaximized();
}
