/********************************************************************************
** Form generated from reading UI file 'welcomewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEWINDOW_H
#define UI_WELCOMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WelcomeWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *logo1;
    QLabel *label;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QComboBox *comboBox;
    QPushButton *pushGo;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WelcomeWindow)
    {
        if (WelcomeWindow->objectName().isEmpty())
            WelcomeWindow->setObjectName("WelcomeWindow");
        WelcomeWindow->resize(1259, 696);
        centralwidget = new QWidget(WelcomeWindow);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 10, 1271, 681));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QGroupBox(layoutWidget);
        groupBox_2->setObjectName("groupBox_2");
        QFont font;
        font.setFamilies({QString::fromUtf8("Ubuntu")});
        groupBox_2->setFont(font);
        groupBox_2->setStyleSheet(QString::fromUtf8("\n"
"* {\n"
"    background-color: #1E1E2E;\n"
"    color: #E0E0E0;\n"
"    border-color: #2A2D3E;\n"
"}\n"
"QGroupBox {\n"
"    margin-left: 20%;\n"
"    margin-right: 20%;\n"
"    margin-bottom: 30px;\n"
"    border: 2px solid;\n"
"    border-color: #3A3F58;\n"
"    border-radius: 15px;\n"
"    background-color: #282A36;\n"
"}\n"
"QLabel {\n"
"    margin-bottom: 30px;\n"
"    font-size: 22px;\n"
"    font-weight: bold;\n"
"    color: #00E5FF;\n"
"}\n"
"label {\n"
"    font-size: 60px;\n"
"    color: #00BCD4;\n"
"}\n"
""));
        verticalLayout_5 = new QVBoxLayout(groupBox_2);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        logo1 = new QLabel(groupBox_2);
        logo1->setObjectName("logo1");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(logo1->sizePolicy().hasHeightForWidth());
        logo1->setSizePolicy(sizePolicy);
        logo1->setStyleSheet(QString::fromUtf8("margin-left:25%; margin-right:25%; margin-bottom:0px;"));
        logo1->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft);

        horizontalLayout->addWidget(logo1);

        label = new QLabel(groupBox_2);
        label->setObjectName("label");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Ubuntu")});
        font1.setBold(true);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("margin-left:30%; margin-right:30%; margin-top:0px; font-size:50px; color:#00E5FF;"));
        label->setAlignment(Qt::AlignmentFlag::AlignHCenter);

        horizontalLayout->addWidget(label);


        verticalLayout_4->addLayout(horizontalLayout);

        groupBox = new QGroupBox(groupBox_2);
        groupBox->setObjectName("groupBox");
        groupBox->setStyleSheet(QString::fromUtf8("\n"
"* {\n"
"    color: #E0E0E0;\n"
"    font-size: 30px;\n"
"    background-color: #0F172A;\n"
"}\n"
"QGroupBox {\n"
"    padding: 50px;\n"
"    border: 2px solid #3A3F58;\n"
"    border-radius: 15px;\n"
"    margin-left: 25%;\n"
"    margin-right: 25%;\n"
"    margin-bottom: 30px;\n"
"}\n"
"QPushButton {\n"
"    background-color: #00BCD4;\n"
"    color: #fff;\n"
"    border: 1px solid #0097A7;\n"
"    border-radius: 10px;\n"
"    font-size: 25px;\n"
"    padding: 10px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #00838F;\n"
"}\n"
""));
        horizontalLayout_3 = new QHBoxLayout(groupBox);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName("comboBox");
        comboBox->setStyleSheet(QString::fromUtf8("\n"
"height: 50px;\n"
"background-color: #3A3F58;\n"
"color: #E0E0E0;\n"
"border: 1px solid #555;\n"
"border-radius: 10px;\n"
"font-size: 20px;\n"
"                  "));

        verticalLayout_2->addWidget(comboBox);

        pushGo = new QPushButton(groupBox);
        pushGo->setObjectName("pushGo");

        verticalLayout_2->addWidget(pushGo);


        horizontalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_4->addWidget(groupBox);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("margin-left:30%; margin-right:30%; margin-top:0px; font-size: 18px; color:#00BCD4;"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(label_2);


        verticalLayout_5->addLayout(verticalLayout_4);


        verticalLayout->addWidget(groupBox_2);

        WelcomeWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(WelcomeWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1259, 25));
        WelcomeWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(WelcomeWindow);
        statusbar->setObjectName("statusbar");
        WelcomeWindow->setStatusBar(statusbar);

        retranslateUi(WelcomeWindow);

        QMetaObject::connectSlotsByName(WelcomeWindow);
    } // setupUi

    void retranslateUi(QMainWindow *WelcomeWindow)
    {
        WelcomeWindow->setWindowTitle(QCoreApplication::translate("WelcomeWindow", "Welcome", nullptr));
        groupBox_2->setTitle(QString());
        logo1->setText(QString());
        label->setText(QCoreApplication::translate("WelcomeWindow", "Welcome to Prashnottar", nullptr));
        groupBox->setTitle(QCoreApplication::translate("WelcomeWindow", "Login As", nullptr));
        pushGo->setText(QCoreApplication::translate("WelcomeWindow", "Go", nullptr));
        label_2->setText(QCoreApplication::translate("WelcomeWindow", "\"Master Every Question with Confidence!\"", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WelcomeWindow: public Ui_WelcomeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEWINDOW_H
