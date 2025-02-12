#ifndef WELCOMEWINDOW_H
#define WELCOMEWINDOW_H

#include <QMainWindow>
#include "studentlogin.h"
#include "examinerlogin.h"
#include <QDialog>
#include <QComboBox>
namespace Ui {
class WelcomeWindow;
}

class WelcomeWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit WelcomeWindow(QWidget *parent = nullptr);
    ~WelcomeWindow();

private slots:
    void on_pushGo_clicked();

private:
    Ui::WelcomeWindow *ui;
    Prashnottar *studentLoginWindow;
    ExaminerLogin *examinerWindow;
    QComboBox *combobox;
    // Student *studentWindow;

};

#endif // WELCOMEWINDOW_H
