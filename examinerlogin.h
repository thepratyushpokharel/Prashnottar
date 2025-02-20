#ifndef EXAMINERLOGIN_H
#define EXAMINERLOGIN_H

#include <QDialog>
#include <QSqlDatabase>
#include "teacherregistration.h"
#include "examiner.h"

namespace Ui {
class ExaminerLogin;
}

class ExaminerLogin : public QDialog
{
    Q_OBJECT

public:
    explicit ExaminerLogin(QWidget *parent = nullptr);
    ~ExaminerLogin();

private slots:
    void on_pushButton_clicked();

    void on_register_2_clicked();

    void on_pushButton_2_clicked();

    void on_linePassword_cursorPositionChanged(int arg1, int arg2);

private:
    Ui::ExaminerLogin *ui;
    QSqlDatabase dab;
    teacherRegistration *signup;
    examiner *examinerWindow;
};

#endif // EXAMINERLOGIN_H
//see the difeerence
