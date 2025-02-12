/********************************************************************************
** Form generated from reading UI file 'student.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENT_H
#define UI_STUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_StudentPortal
{
public:
    QVBoxLayout *mainLayout;
    QLabel *titleLabel;
    QHBoxLayout *contentLayout;
    QGroupBox *profileGroupBox;
    QVBoxLayout *profileLayout;
    QLabel *studentIDLabel;
    QLabel *fullNameLabel;
    QLabel *emailLabel;
    QLabel *batchLabel;
    QLabel *classLabel;
    QGroupBox *actionGroupBox;
    QVBoxLayout *actionLayout;
    QPushButton *examButton;
    QPushButton *changePasswordButton;
    QPushButton *resultsButton;

    void setupUi(QDialog *StudentPortal)
    {
        if (StudentPortal->objectName().isEmpty())
            StudentPortal->setObjectName("StudentPortal");
        StudentPortal->resize(1280, 720);
        StudentPortal->setStyleSheet(QString::fromUtf8("\n"
"QComboBox {\n"
"    border: 2px solid;\n"
"    border-radius: 10px;\n"
"    border-color: #2E4053;\n"
"    color: #154360;\n"
"    background-color: #ECF0F1;\n"
"}\n"
"* {\n"
"    background-color: #2C3E50;\n"
"    font-family: Roboto;\n"
"    color: #ECF0F1;\n"
"}\n"
"QLineEdit {\n"
"    height: 35px;\n"
"    border: 1px solid;\n"
"    border-radius: 8px;\n"
"    border-color: #154360;\n"
"    background-color: #ECF0F1;\n"
"    color: #2C3E50;\n"
"}\n"
"QPushButton {\n"
"    background-color: #5D6D7E;\n"
"    color: #154360;\n"
"    border-radius: 10px;\n"
"    border: 2px solid;\n"
"    border-color: #2E4053;\n"
"    height: 35px;\n"
"    width: 120px;\n"
"}\n"
"QGroupBox {\n"
"    width: 480px;\n"
"    font-size: 16px;\n"
"}\n"
"   "));
        mainLayout = new QVBoxLayout(StudentPortal);
        mainLayout->setObjectName("mainLayout");
        titleLabel = new QLabel(StudentPortal);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setAlignment(Qt::AlignCenter);
        QFont font;
        font.setFamilies({QString::fromUtf8("Roboto")});
        font.setPointSize(48);
        font.setBold(true);
        titleLabel->setFont(font);

        mainLayout->addWidget(titleLabel);

        contentLayout = new QHBoxLayout();
        contentLayout->setObjectName("contentLayout");
        profileGroupBox = new QGroupBox(StudentPortal);
        profileGroupBox->setObjectName("profileGroupBox");
        profileLayout = new QVBoxLayout(profileGroupBox);
        profileLayout->setObjectName("profileLayout");
        studentIDLabel = new QLabel(profileGroupBox);
        studentIDLabel->setObjectName("studentIDLabel");

        profileLayout->addWidget(studentIDLabel);

        fullNameLabel = new QLabel(profileGroupBox);
        fullNameLabel->setObjectName("fullNameLabel");

        profileLayout->addWidget(fullNameLabel);

        emailLabel = new QLabel(profileGroupBox);
        emailLabel->setObjectName("emailLabel");

        profileLayout->addWidget(emailLabel);

        batchLabel = new QLabel(profileGroupBox);
        batchLabel->setObjectName("batchLabel");

        profileLayout->addWidget(batchLabel);

        classLabel = new QLabel(profileGroupBox);
        classLabel->setObjectName("classLabel");

        profileLayout->addWidget(classLabel);


        contentLayout->addWidget(profileGroupBox);

        actionGroupBox = new QGroupBox(StudentPortal);
        actionGroupBox->setObjectName("actionGroupBox");
        actionLayout = new QVBoxLayout(actionGroupBox);
        actionLayout->setObjectName("actionLayout");
        examButton = new QPushButton(actionGroupBox);
        examButton->setObjectName("examButton");

        actionLayout->addWidget(examButton);

        changePasswordButton = new QPushButton(actionGroupBox);
        changePasswordButton->setObjectName("changePasswordButton");

        actionLayout->addWidget(changePasswordButton);

        resultsButton = new QPushButton(actionGroupBox);
        resultsButton->setObjectName("resultsButton");

        actionLayout->addWidget(resultsButton);


        contentLayout->addWidget(actionGroupBox);


        mainLayout->addLayout(contentLayout);


        retranslateUi(StudentPortal);

        QMetaObject::connectSlotsByName(StudentPortal);
    } // setupUi

    void retranslateUi(QDialog *StudentPortal)
    {
        StudentPortal->setWindowTitle(QCoreApplication::translate("StudentPortal", "Student Portal", nullptr));
        titleLabel->setText(QCoreApplication::translate("StudentPortal", "Student Dashboard", nullptr));
        profileGroupBox->setTitle(QCoreApplication::translate("StudentPortal", "Profile Information", nullptr));
        studentIDLabel->setText(QCoreApplication::translate("StudentPortal", "ID: ", nullptr));
        fullNameLabel->setText(QCoreApplication::translate("StudentPortal", "Full Name: ", nullptr));
        emailLabel->setText(QCoreApplication::translate("StudentPortal", "Email: ", nullptr));
        batchLabel->setText(QCoreApplication::translate("StudentPortal", "Batch: ", nullptr));
        classLabel->setText(QCoreApplication::translate("StudentPortal", "Class: ", nullptr));
        actionGroupBox->setTitle(QCoreApplication::translate("StudentPortal", "Available Actions", nullptr));
        examButton->setText(QCoreApplication::translate("StudentPortal", "Enter Exam", nullptr));
        changePasswordButton->setText(QCoreApplication::translate("StudentPortal", "Change Password", nullptr));
        resultsButton->setText(QCoreApplication::translate("StudentPortal", "Check Previous Results", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentPortal: public Ui_StudentPortal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_H
