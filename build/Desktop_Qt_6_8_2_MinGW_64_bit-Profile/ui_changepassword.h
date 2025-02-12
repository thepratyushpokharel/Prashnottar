/********************************************************************************
** Form generated from reading UI file 'changepassword.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPASSWORD_H
#define UI_CHANGEPASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_changePassword
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer_7;
    QGroupBox *Login;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *id;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *idLineEdit;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *password;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *currentPasswordLineEdit;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *newPasswordLineEdit;
    QSpacerItem *verticalSpacer_8;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *confirmPassword;
    QSpacerItem *verticalSpacer;
    QPushButton *changePasswordButton;
    QSpacerItem *verticalSpacer_6;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *changePassword)
    {
        if (changePassword->objectName().isEmpty())
            changePassword->setObjectName("changePassword");
        changePassword->resize(938, 563);
        changePassword->setStyleSheet(QString::fromUtf8("QComboBox\n"
"{\n"
"border: 1px solid;\n"
"border-radius: 12px; \n"
"border-color: rgba(33,35,50,255);\n"
"color:#0000ad;\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"*{\n"
"	background-color: rgba(33,35,50,255);\n"
"font-family:Ubuntu Medium;\n"
"color:#fff;\n"
"}\n"
"QLineEdit\n"
"{\n"
"height:40px;\n"
"border: 1px solid;\n"
"border-color: rgba(33,35,50,255);\n"
"border-radius:10px;\n"
"color:rgba(33,35,50,255);\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton\n"
"{\n"
"background-color: #a7abaa;\n"
"color: rgba(0,0,173,255);\n"
"border-radius: 12px; \n"
"border: 1px solid;\n"
"border-color: rgba(33,35,50,255);\n"
"height:40px;\n"
"width:100px;\n"
"}\n"
"QGroupBox\n"
"{\n"
"	width:500px;\n"
"}"));
        gridLayout = new QGridLayout(changePassword);
        gridLayout->setObjectName("gridLayout");
        groupBox = new QGroupBox(changePassword);
        groupBox->setObjectName("groupBox");
        groupBox->setStyleSheet(QString::fromUtf8("QComboBox\n"
"{\n"
"border: 1px solid;\n"
"border-radius: 12px; \n"
"border-color: rgba(33,35,50,255);\n"
"color:#0000ad;\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"*{\n"
"	background-color: rgba(33,35,50,255);\n"
"font-family:Ubuntu;\n"
"color:#fff;\n"
"}\n"
"QLineEdit\n"
"{\n"
"height:40px;\n"
"border: 1px solid;\n"
"border-color: rgba(33,35,50,255);\n"
"border-radius:10px;\n"
"color:rgba(33,35,50,255);\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton\n"
"{\n"
"background-color: #a7abaa;\n"
"color: rgba(0,0,173,255);\n"
"border-radius: 12px; \n"
"border: 1px solid;\n"
"border-color: rgba(33,35,50,255);\n"
"height:40px;\n"
"width:100px;\n"
"}\n"
"QGroupBox\n"
"{\n"
"	width:500px;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label = new QLabel(groupBox);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("Ubuntu")});
        font.setPointSize(55);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);


        verticalLayout_2->addLayout(horizontalLayout_3);

        Login = new QGroupBox(groupBox);
        Login->setObjectName("Login");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Ubuntu")});
        font1.setPointSize(30);
        Login->setFont(font1);
        Login->setStyleSheet(QString::fromUtf8("color:#fff;"));
        gridLayout_3 = new QGridLayout(Login);
        gridLayout_3->setObjectName("gridLayout_3");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        id = new QLabel(Login);
        id->setObjectName("id");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Ubuntu")});
        font2.setPointSize(18);
        id->setFont(font2);

        horizontalLayout->addWidget(id);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        idLineEdit = new QLineEdit(Login);
        idLineEdit->setObjectName("idLineEdit");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Ubuntu")});
        font3.setPointSize(16);
        idLineEdit->setFont(font3);
        idLineEdit->setStyleSheet(QString::fromUtf8("border: 1px solid;\n"
"border-color: rgb(255, 111, 42);\n"
"border-radius:5px;\n"
"height:45px;\n"
"background-color: rgb(255, 255, 255);\n"
"color:#0000ad;"));

        horizontalLayout->addWidget(idLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        password = new QLabel(Login);
        password->setObjectName("password");
        password->setFont(font2);

        horizontalLayout_2->addWidget(password);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        currentPasswordLineEdit = new QLineEdit(Login);
        currentPasswordLineEdit->setObjectName("currentPasswordLineEdit");
        currentPasswordLineEdit->setFont(font3);
        currentPasswordLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border: 1px solid;\n"
"border-color: rgb(255, 111, 42);\n"
"border-radius:5px;\n"
"height:45px;\n"
"color:#0000ad;"));
        currentPasswordLineEdit->setEchoMode(QLineEdit::Normal);

        horizontalLayout_2->addWidget(currentPasswordLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_3->addItem(verticalSpacer_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_3 = new QLabel(Login);
        label_3->setObjectName("label_3");
        label_3->setFont(font2);

        horizontalLayout_4->addWidget(label_3);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        newPasswordLineEdit = new QLineEdit(Login);
        newPasswordLineEdit->setObjectName("newPasswordLineEdit");
        newPasswordLineEdit->setFont(font3);
        newPasswordLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border: 1px solid;\n"
"border-color: rgb(255, 111, 42);\n"
"border-radius:5px;\n"
"height:45px;\n"
"color:#0000ad;"));

        horizontalLayout_4->addWidget(newPasswordLineEdit);


        verticalLayout_3->addLayout(horizontalLayout_4);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_3->addItem(verticalSpacer_8);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_4 = new QLabel(Login);
        label_4->setObjectName("label_4");
        label_4->setFont(font2);

        horizontalLayout_5->addWidget(label_4);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        confirmPassword = new QLineEdit(Login);
        confirmPassword->setObjectName("confirmPassword");
        confirmPassword->setFont(font3);
        confirmPassword->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border: 1px solid;\n"
"border-color: rgb(255, 111, 42);\n"
"border-radius:5px;\n"
"height:45px;\n"
"color:#0000ad;"));

        horizontalLayout_5->addWidget(confirmPassword);


        verticalLayout_3->addLayout(horizontalLayout_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        changePasswordButton = new QPushButton(Login);
        changePasswordButton->setObjectName("changePasswordButton");
        changePasswordButton->setFont(font3);
        changePasswordButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        changePasswordButton->setStyleSheet(QString::fromUtf8("background-color: #a7abaa;\n"
"color: rgba(0,0,173,255);\n"
"border-radius: 12px; \n"
"border: 1px solid;\n"
"border-color: #0000ad;\n"
"height:50px;\n"
"margin-left:80px;\n"
"margin-right:80px;"));

        verticalLayout_3->addWidget(changePasswordButton);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_3->addItem(verticalSpacer_6);

        pushButton_2 = new QPushButton(Login);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setFont(font3);
        pushButton_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: #a7abaa;\n"
"color:rgba(0,0,173,255);\n"
"border-radius: 12px; \n"
"border: 1px solid;\n"
"border-color: #0000ad;\n"
"height:50px;\n"
"margin-left:80px;\n"
"margin-right:80px;"));

        verticalLayout_3->addWidget(pushButton_2);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_3->addItem(verticalSpacer_7);


        gridLayout_3->addLayout(verticalLayout_3, 2, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_3->addItem(verticalSpacer_5, 0, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        gridLayout_3->addItem(verticalSpacer_2, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 2, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 2, 2, 1, 1);


        verticalLayout_2->addWidget(Login);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(changePassword);

        QMetaObject::connectSlotsByName(changePassword);
    } // setupUi

    void retranslateUi(QDialog *changePassword)
    {
        changePassword->setWindowTitle(QCoreApplication::translate("changePassword", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("changePassword", "<font color = #fff>Change Password\n"
"", nullptr));
        Login->setTitle(QString());
        id->setText(QCoreApplication::translate("changePassword", "<font color = #fff>ID", nullptr));
        password->setText(QCoreApplication::translate("changePassword", "<font color = #fff>Old Password\n"
"", nullptr));
        label_3->setText(QCoreApplication::translate("changePassword", "New Password", nullptr));
        label_4->setText(QCoreApplication::translate("changePassword", "Confirm Password", nullptr));
        changePasswordButton->setText(QCoreApplication::translate("changePassword", "Change Password", nullptr));
        pushButton_2->setText(QCoreApplication::translate("changePassword", "Go back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class changePassword: public Ui_changePassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPASSWORD_H
