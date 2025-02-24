#include "studentlogin.h"
#include "ui_studentlogin.h"
#include "welcome.h"
#include <QMessageBox>
#include <QDebug>
#include <QtSql/QSqlDatabase>
//#include <QtSql/QSqlError>
//#include <QtSql/QSqlQuery>

Welcome *welcomeWindow;
Prashnottar::Prashnottar(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Prashnottar)
{
    ui->setupUi(this);
    //ui->error->hide();
    this->setWindowTitle("Prashnottar");
    this->setWindowIcon(QIcon(":/rec/assets/logo1.png"));
    QPixmap logo(":/rec/assets/logo1.png");
    ui->logo3->setPixmap(logo.scaled(100,100,Qt::KeepAspectRatio));

    QPixmap id(":/rec/assets/icons8-id-50.png");
    ui->idimg->setPixmap(id.scaled(40,40,Qt::KeepAspectRatio));

    QPixmap psd(":/rec/assets/icons8-password-50.png");
    ui->psdimg->setPixmap(psd.scaled(40,40,Qt::KeepAspectRatio));

    QMessageBox messageIntro;
    messageIntro.resize(800,800);
    messageIntro.setStyleSheet(
        "QMessageBox {"
        "    background-color: black;"
        "    color: #000;"
        "}"
        );

    this->setWindowTitle("Student Login");
    QSqlDatabase dab = QSqlDatabase::addDatabase("QMYSQL");
    dab.setHostName("localhost");
    dab.setUserName("root");
    dab.setPassword("");
    dab.setDatabaseName("prashnottar");
    dab.setPort(3306);
    dab.open();
    if (!dab.open()) {
        qDebug() << "Error: " << dab.lastError().text();
        messageIntro.setWindowTitle("Database Error");
        messageIntro.setText("Failed to connect to database: " + dab.lastError().text());
        messageIntro.exec();
    }
}

Prashnottar::~Prashnottar()
{
    delete ui;
}


void Prashnottar::on_pushButton_clicked()
{
    QMessageBox message;
    message.setWindowTitle("Error");
    message.resize(800,800);
    message.setText("Id and Password is not correct!!!");
    message.setStyleSheet(
        "QMessageBox {"
        "    background-color: #f0f0f0;"
        "    color: #333333;"
        "}"
        );
    QString id=ui->idLine->text();
    QString password=ui->passwordLine->text();
    QSqlQuery query_login(QSqlDatabase::database("Prashnottar"));
    query_login.prepare(QString("SELECT id, password, first_name, last_name, user_email,date_of_birth, batch, grade FROM students_data WHERE id=:id AND password=:password"));
    query_login.bindValue(":id",id);
    query_login.bindValue(":password",password);
    if(!query_login.exec())
    {
        QMessageBox::warning(this,"Login","Try Again.");
    }
    else
    {
        if(query_login.next())
        {
            QString iddb=query_login.value(0).toString();
            QString passworddb=query_login.value(1).toString();
            QString fnamedb = query_login.value(2).toString();
            QString lnamedb = query_login.value(3).toString();
            QString emaildb = query_login.value(4).toString();
            QDate dob = query_login.value(5).toDate();
            QString batchdb = query_login.value(6).toString();
            QString gradedb = query_login.value(7).toString();
            if(iddb==id && passworddb==password)
            {
                close();
                studentDashboard = new Student(iddb,fnamedb,lnamedb,emaildb,dob,batchdb,gradedb,this);
                studentDashboard->showMaximized();
            }

        }
        else
            //QMessageBox::warning(this,"Login","Username and password do not match.");
            message.exec();


        // ui->statusbar->showMessage("Username and Password is not correct!!!");
    }
}


void Prashnottar::on_pushButton_2_clicked()
{
    close();
    welcomeWindow = new Welcome();
    welcomeWindow->showMaximized();
}


void Prashnottar::on_pushButton_3_clicked()
{
    close();
    registrationWindow = new studentRegistration();
    registrationWindow->showMaximized();
}

void Prashnottar::on_passwordLine_cursorPositionChanged(int arg1, int arg2)
{

}

