#include "welcomewindow.h"
#include "ui_welcomewindow.h"
#include <QComboBox>
#include <QMessageBox>
#include <QPixmap>
#include <QFontDatabase>
#include <QWidget>

using namespace std;

WelcomeWindow::WelcomeWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::WelcomeWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Prashnottar");
    this->setWindowIcon(QIcon("C:/Users/ACER/Desktop/Prashnottar/assets/logo.png"));


    QPixmap logo("C:/Users/ACER/Desktop/Prashnottar/assets/logo.png");
    ui->logo1->setPixmap(logo.scaled(150,150,Qt::KeepAspectRatio));
    ui->comboBox->addItem(QIcon("C:/Users/ACER/Desktop/Prashnottar/assets/icons8-graduate-100.png"),"Student");
    ui->comboBox->addItem(QIcon("C:/Users/ACER/Desktop/Prashnottar/assets/icons8-teacher-100.png"),"Examiner");

}

WelcomeWindow::~WelcomeWindow()
{
    delete ui;
}

void WelcomeWindow::on_pushGo_clicked()
{
    close();

    int x =  ui->comboBox->currentIndex();

    if(x == 0)
    {
        close();
        studentLoginWindow = new Prashnottar();
        studentLoginWindow->showMaximized();
        //studentWindow = new Student("defaultID","defaultFname","defaultLname","defaultEmail",QDate(2024,07,21),"defaultBatch","defaultGrade",this);
        //studentWindow->showMaximized();
    }
    else
    {
        close();
        examinerWindow = new ExaminerLogin();
        examinerWindow->showMaximized();
    }
}

