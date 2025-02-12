/********************************************************************************
** Form generated from reading UI file 'class8.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASS8_H
#define UI_CLASS8_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_class8
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QComboBox *subject;
    QHBoxLayout *horizontalLayout;
    QLabel *logo5;
    QLabel *examType;
    QLabel *timerLabel;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *prevButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *nextButton;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_9;
    QLabel *questionLabel;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *option1;
    QRadioButton *option2;
    QRadioButton *option3;
    QRadioButton *option4;
    QSpacerItem *verticalSpacer;
    QPushButton *homeButton;
    QPushButton *start;
    QLabel *label;

    void setupUi(QDialog *class8)
    {
        if (class8->objectName().isEmpty())
            class8->setObjectName("class8");
        class8->resize(1234, 792);
        class8->setStyleSheet(QString::fromUtf8("QComboBox\n"
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
"font-size:20px;\n"
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
"}\n"
""));
        gridLayout_2 = new QGridLayout(class8);
        gridLayout_2->setObjectName("gridLayout_2");
        groupBox = new QGroupBox(class8);
        groupBox->setObjectName("groupBox");
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName("gridLayout_3");
        subject = new QComboBox(groupBox);
        subject->setObjectName("subject");
        QFont font;
        font.setFamilies({QString::fromUtf8("Ubuntu")});
        subject->setFont(font);
        subject->setStyleSheet(QString::fromUtf8("height:50px;"));

        gridLayout_3->addWidget(subject, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        logo5 = new QLabel(groupBox);
        logo5->setObjectName("logo5");

        horizontalLayout->addWidget(logo5);

        examType = new QLabel(groupBox);
        examType->setObjectName("examType");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(examType->sizePolicy().hasHeightForWidth());
        examType->setSizePolicy(sizePolicy);
        examType->setStyleSheet(QString::fromUtf8("font-size:50px;"));
        examType->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(examType);


        gridLayout_3->addLayout(horizontalLayout, 0, 0, 1, 1);

        timerLabel = new QLabel(groupBox);
        timerLabel->setObjectName("timerLabel");
        timerLabel->setFont(font);
        timerLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(timerLabel, 4, 0, 1, 1);

        scrollArea = new QScrollArea(groupBox);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1186, 455));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        prevButton = new QPushButton(scrollAreaWidgetContents);
        prevButton->setObjectName("prevButton");

        horizontalLayout_2->addWidget(prevButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        nextButton = new QPushButton(scrollAreaWidgetContents);
        nextButton->setObjectName("nextButton");

        horizontalLayout_2->addWidget(nextButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        groupBox_2 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_9 = new QVBoxLayout(groupBox_2);
        verticalLayout_9->setObjectName("verticalLayout_9");
        questionLabel = new QLabel(groupBox_2);
        questionLabel->setObjectName("questionLabel");

        verticalLayout_9->addWidget(questionLabel);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        option1 = new QRadioButton(groupBox_2);
        option1->setObjectName("option1");
        option1->setChecked(true);

        verticalLayout_3->addWidget(option1);

        option2 = new QRadioButton(groupBox_2);
        option2->setObjectName("option2");
        option2->setCheckable(true);
        option2->setChecked(false);

        verticalLayout_3->addWidget(option2);

        option3 = new QRadioButton(groupBox_2);
        option3->setObjectName("option3");

        verticalLayout_3->addWidget(option3);

        option4 = new QRadioButton(groupBox_2);
        option4->setObjectName("option4");

        verticalLayout_3->addWidget(option4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_3->addItem(verticalSpacer);


        verticalLayout_9->addLayout(verticalLayout_3);


        gridLayout->addWidget(groupBox_2, 0, 0, 1, 1);

        homeButton = new QPushButton(scrollAreaWidgetContents);
        homeButton->setObjectName("homeButton");
        homeButton->setStyleSheet(QString::fromUtf8("margin:0px 300px 0px 300px;"));

        gridLayout->addWidget(homeButton, 3, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_3->addWidget(scrollArea, 5, 0, 1, 1);

        start = new QPushButton(groupBox);
        start->setObjectName("start");
        start->setFont(font);
        start->setStyleSheet(QString::fromUtf8("height:50px;"));

        gridLayout_3->addWidget(start, 3, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setFont(font);

        gridLayout_3->addWidget(label, 1, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(class8);

        QMetaObject::connectSlotsByName(class8);
    } // setupUi

    void retranslateUi(QDialog *class8)
    {
        class8->setWindowTitle(QCoreApplication::translate("class8", "Dialog", nullptr));
        groupBox->setTitle(QString());
        logo5->setText(QCoreApplication::translate("class8", "TextLabel", nullptr));
        examType->setText(QCoreApplication::translate("class8", "Examination Class 8", nullptr));
        timerLabel->setText(QString());
        prevButton->setText(QCoreApplication::translate("class8", "Previous", nullptr));
        nextButton->setText(QCoreApplication::translate("class8", "Next", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("class8", "Questions", nullptr));
        questionLabel->setText(QCoreApplication::translate("class8", "Text", nullptr));
        option1->setText(QCoreApplication::translate("class8", "option1", nullptr));
        option2->setText(QCoreApplication::translate("class8", "option2", nullptr));
        option3->setText(QCoreApplication::translate("class8", "option3", nullptr));
        option4->setText(QCoreApplication::translate("class8", "option4", nullptr));
        homeButton->setText(QCoreApplication::translate("class8", "Return Home", nullptr));
        start->setText(QCoreApplication::translate("class8", "Go", nullptr));
        label->setText(QCoreApplication::translate("class8", "*Read the instructions below carefully:\n"
"1.Carefully choose the subject. You can choose subject only once.\n"
"2.After you choose subject and click 'Go' Your timer will be started.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class class8: public Ui_class8 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASS8_H
