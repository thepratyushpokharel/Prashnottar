#ifndef STUDENTLOGIN_H
#define STUDENTLOGIN_H

#include <QMainWindow>
#include <QDebug>
#include <QtSql>
#include <QFileInfo>
#include <QSqlDatabase>
#include "studentregistration.h"
#include "student.h"


QT_BEGIN_NAMESPACE
namespace Ui {
class Prashnottar;
}
QT_END_NAMESPACE

class Prashnottar : public QMainWindow
{
    Q_OBJECT

public:
    Prashnottar(QWidget *parent = nullptr);

    ~Prashnottar();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_passwordLine_cursorPositionChanged(int arg1, int arg2);

private:
    Ui::Prashnottar *ui;
    //class8 *class8Window;
    studentRegistration *registrationWindow;
    Student *studentDashboard;

};
#endif // STUDENTLOGIN_H
