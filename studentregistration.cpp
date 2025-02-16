#include "studentregistration.h"
#include "ui_studentregistration.h"
#include "studentlogin.h"
#include <QMessageBox>
// #include <QtSql>
// #include <QSqlDatabase>
#include <QComboBox>
#include <QPixmap>
#include <QFontDatabase>

Prashnottar *loginWindow;
//QSqlDatabase dab;

int countDigits(long long n)
{
    int a = 0;
    while (n != 0)
    {
        a++;
        n = n / 10;
    }
    return a;
}

bool chkChar(QChar c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

bool chkEmail(QString email)
{
    if (!chkChar(email[0]))
    {
        return 0;
    }

    int at = -1, dot = -1;

    for (int i = 0; i < email.length(); i++)
    {
        if (email[i] == '@')
        {
            at = i;
        }
        else if (email[i] == '.')
        {
            dot = i;
        }
    }

    if (at == -1 || dot == -1)
        return 0;

    if (at > dot)
        return 0;

    return !(dot >= (email.length() - 1));
}

studentRegistration::studentRegistration(QWidget *parent)
    : QDialog(parent), ui(new Ui::studentRegistration)
{

    ui->setupUi(this);
    QPixmap logoS(":/rec/assets/logo.png");
    ui->comboBox->addItem("Male");
    ui->comboBox->addItem("Female");
    ui->comboBox->addItem("Others");


}

studentRegistration::~studentRegistration()
{
    delete ui;
}

void studentRegistration::on_pushButton_clicked()
{
    close();
    loginWindow = new Prashnottar();
    loginWindow->showMaximized();
}

void studentRegistration::on_pushButton_2_clicked()
{
  
    close();
    loginWindow = new Prashnottar();
    loginWindow->showMaximized();
}

void studentRegistration::on_lineEdit_Cpsd_returnPressed()
{
    on_pushButton_2_clicked();
}

void studentRegistration::on_lineEdit_lN_returnPressed()
{
    on_pushButton_2_clicked();
}

void studentRegistration::on_lineEdit_mN_returnPressed()
{
    on_pushButton_2_clicked();
}

void studentRegistration::on_lineEdit_fN_returnPressed()
{
    on_pushButton_2_clicked();
}

void studentRegistration::on_lineEdit_id_returnPressed()
{
    on_pushButton_2_clicked();
}

void studentRegistration::on_lineEdit_email_returnPressed()
{
    on_pushButton_2_clicked();
}

void studentRegistration::on_lineEdit_phn_returnPressed()
{
    on_pushButton_2_clicked();
}

void studentRegistration::on_lineEdit_psd_returnPressed()
{
    on_pushButton_2_clicked();
}
