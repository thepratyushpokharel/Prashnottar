#include "welcome.h"
#include "ui_welcome.h"
#include <QMessageBox>
#include <QPixmap>
#include <QComboBox>
#include <QFontDatabase>
using namespace std;

Welcome::Welcome(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Welcome)
{

    ui->setupUi(this);
    this->setWindowTitle("Prashnottar");
    this->setWindowIcon(QIcon(":/rec/assets/logo1.png"));


    QPixmap logo(":/rec/assets/logo1.png");
    ui->logo1->setPixmap(logo.scaled(100,2100,Qt::KeepAspectRatio));
    ui->comboBox->addItem(QIcon(":/rec/assets/icons8-graduate-100.png"),"Student");
    ui->comboBox->addItem(QIcon(":/rec/assets/icons8-teacher-100.png"),"Examiner");

}



Welcome::~Welcome()
{
    delete ui;
}

void Welcome::on_pushGo_clicked()
{
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
