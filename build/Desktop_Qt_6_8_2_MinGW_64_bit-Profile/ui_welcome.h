/********************************************************************************
** Form generated from reading UI file 'welcome.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOME_H
#define UI_WELCOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Welcome
{
public:
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *logo1;
    QLabel *label;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QComboBox *comboBox;
    QPushButton *pushGo;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;

    void setupUi(QDialog *Welcome)
    {
        if (Welcome->objectName().isEmpty())
            Welcome->setObjectName("Welcome");
        Welcome->setEnabled(true);
        Welcome->resize(1303, 665);
        QFont font;
        font.setFamilies({QString::fromUtf8("Ubuntu")});
        Welcome->setFont(font);
        Welcome->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        Welcome->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: rgba(235,206,188,255);\n"
"font-family:Ubuntu;\n"
"\n"
"}\n"
"\n"
"QLineEdit\n"
"{	\n"
"color:#0000ad;\n"
"	background-color: rgb(255, 255, 255);\n"
"height:40px;\n"
"}\n"
"QComboBox\n"
"{\n"
"color:#0000ad;\n"
"	background-color: rgb(255, 255, 255);\n"
"height:30px;\n"
"width:80px;\n"
"}\n"
"QPushButton\n"
"{	\n"
"color:rgba(33,35,50,255);\n"
"	background-color: rgb(167, 171, 170);\n"
"	color:#0000ad;\n"
"  width:100px;\n"
"  height:30px\n"
"}\n"
"QTableWidget\n"
"{\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        verticalLayout_3 = new QVBoxLayout(Welcome);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_3->addItem(verticalSpacer_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        groupBox_2 = new QGroupBox(Welcome);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setFont(font);
        groupBox_2->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: rgba(73,41,18,255);\n"
"color:rgba(251,238,230,255);\n"
"	border-color: rgb(42, 45, 62);\n"
"}\n"
"QGroupBox\n"
"{\n"
"margin-left:25%;\n"
"margin-right:25%;\n"
"margin-bottom:40px;\n"
"	border:1px solid;\n"
"	border-color: rgb(42, 45, 62);\n"
"border-radius:20px;\n"
"}\n"
"QLabel\n"
"{\n"
"margin-bottom:40px;\n"
"}\n"
"label\n"
"{\n"
"font-size:70px;\n"
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
        logo1->setStyleSheet(QString::fromUtf8("margin-left:30%;\n"
"margin-right:30%;\n"
"margin-bottom:0px;"));
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
        font1.setBold(false);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("margin-left:30%;\n"
"margin-right:30%;\n"
"margin-top:0px;\n"
"margin-bottom:0px;\n"
"padding:0px 0px 0px 0px;\n"
"font-size:70px;"));
        label->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignHCenter);

        horizontalLayout->addWidget(label);


        verticalLayout_4->addLayout(horizontalLayout);

        groupBox = new QGroupBox(groupBox_2);
        groupBox->setObjectName("groupBox");
        groupBox->setFont(font);
        groupBox->setStyleSheet(QString::fromUtf8("*{color: rgba(251,238,230,255);\n"
"font-size:40px;\n"
"background-color:black;\n"
"}\n"
"QGroupBox{\n"
"	padding:70px;\n"
"border:1px solid;\n"
"	border-color: rgb(42, 45, 62);\n"
"border-radius:20px;\n"
"margin-left:80%;\n"
"margin-right:80%;\n"
"margin-bottom:40px;\n"
"}\n"
"QPushButton{\n"
"margin-top:30px;\n"
"	margin-left:80%;\n"
"margin-right:80%;\n"
"}"));
        horizontalLayout_3 = new QHBoxLayout(groupBox);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer = new QSpacerItem(300, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName("comboBox");
        comboBox->setFont(font);
        comboBox->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        comboBox->setStyleSheet(QString::fromUtf8("height: 60px;\n"
"background-color: #a7abaa;\n"
"color:#fff;\n"
"width:70px;\n"
"border:1px solid;\n"
"border-color: rgb(42, 45, 62);\n"
"border-radius:15px;\n"
"font-size:25px;\n"
""));

        verticalLayout_2->addWidget(comboBox);

        pushGo = new QPushButton(groupBox);
        pushGo->setObjectName("pushGo");
        pushGo->setFont(font);
        pushGo->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushGo->setStyleSheet(QString::fromUtf8("background-color: #a7abaa;\n"
"color:#fff;\n"
"width:70px;\n"
"height:50px;\n"
"border:1px solid;\n"
"border-color: rgb(42, 45, 62);\n"
"border-radius:15px;\n"
"font-size:25px;\n"
""));

        verticalLayout_2->addWidget(pushGo);


        horizontalLayout_3->addLayout(verticalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(300, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_4->addWidget(groupBox);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("margin-left:30%;\n"
"margin-right:30%;\n"
"margin-top:0px;\n"
""));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(label_2);


        verticalLayout_5->addLayout(verticalLayout_4);


        verticalLayout->addWidget(groupBox_2);


        verticalLayout_3->addLayout(verticalLayout);


        retranslateUi(Welcome);

        QMetaObject::connectSlotsByName(Welcome);
    } // setupUi

    void retranslateUi(QDialog *Welcome)
    {
        Welcome->setWindowTitle(QCoreApplication::translate("Welcome", "Dialog", nullptr));
        groupBox_2->setTitle(QString());
        logo1->setText(QCoreApplication::translate("Welcome", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("Welcome", "Welcome to Prashnottar", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Welcome", "Login As", nullptr));
        pushGo->setText(QCoreApplication::translate("Welcome", "Go", nullptr));
        label_2->setText(QCoreApplication::translate("Welcome", "\"Master Every Question with Confidence!\"", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Welcome: public Ui_Welcome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOME_H
