#include "student.h"
#include <ui_student.h>
#include <QPixmap>
#include <QMessageBox>
#include <QDialog>
#include <studentlogin.h>
Prashnottar *logoutWindow;


Student::Student(const QString &id, const QString &fname, const QString &lname, const QString &email, const QDate &dob,
                 const QString &batch, const QString &grade, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Student)
    , studentId(id)
    , studentFName(fname)
    , studentLName(lname)
   ,studentEmail(email)
    ,studentDOB(dob)
    ,studentBatch(batch)
    , studentGrade(grade)
{
    ui->setupUi(this);
    QPixmap logo(":/rec/assets/logo.png");
    ui->logo4->setPixmap(logo.scaled(200,200,Qt::KeepAspectRatio));
    QMessageBox message;
    message.resize(800,800);
    message.setStyleSheet(
        "QMessageBox {"
        "    background-color: #f0f0f0;"
        "    color: #333333;"
        "}"
        );

    ui->idLabel->setText(studentId);
    ui->FnameLabel->setText(studentFName);
    ui->LnameLabel->setText(studentLName);
    ui->emailLabel->setText(studentEmail);
    ui->dobLabel->setText(studentDOB.toString("yyyy-MM-dd"));
    ui->batchLabel->setText(studentBatch);
    ui->gradeLabel->setText(studentGrade);

}

Student::~Student()
{
    delete ui;
}


void Student::on_pushButton_clicked()
{
        
}


void Student::on_pushButton_4_clicked()
{
    close();
    logoutWindow = new Prashnottar();
    logoutWindow->showMaximized();
}


void Student::on_changePassword_clicked()
{
    close();

}


void Student::on_prevResult_clicked()
{
    close();
}

