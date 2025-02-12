/********************************************************************************
** Form generated from reading UI file 'class9.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASS9_H
#define UI_CLASS9_H

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

class Ui_class9
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QPushButton *start;
    QLabel *label;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *prevButton;
    QPushButton *nextButton;
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
    QHBoxLayout *horizontalLayout;
    QLabel *logo5;
    QLabel *label_2;
    QComboBox *subject;
    QLabel *timerLabel;

    void setupUi(QDialog *class9)
    {
        if (class9->objectName().isEmpty())
            class9->setObjectName("class9");
        class9->resize(1246, 772);
        class9->setStyleSheet(QString::fromUtf8("QComboBox\n"
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
"}"));
        gridLayout_2 = new QGridLayout(class9);
        gridLayout_2->setObjectName("gridLayout_2");
        groupBox = new QGroupBox(class9);
        groupBox->setObjectName("groupBox");
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName("gridLayout_3");
        start = new QPushButton(groupBox);
        start->setObjectName("start");

        gridLayout_3->addWidget(start, 3, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout_3->addWidget(label, 1, 0, 1, 1);

        scrollArea = new QScrollArea(groupBox);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1198, 478));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        prevButton = new QPushButton(scrollAreaWidgetContents);
        prevButton->setObjectName("prevButton");

        horizontalLayout_2->addWidget(prevButton);

        nextButton = new QPushButton(scrollAreaWidgetContents);
        nextButton->setObjectName("nextButton");

        horizontalLayout_2->addWidget(nextButton);


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

        gridLayout->addWidget(homeButton, 3, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_3->addWidget(scrollArea, 5, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        logo5 = new QLabel(groupBox);
        logo5->setObjectName("logo5");

        horizontalLayout->addWidget(logo5);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);


        gridLayout_3->addLayout(horizontalLayout, 0, 0, 1, 1);

        subject = new QComboBox(groupBox);
        subject->setObjectName("subject");
        subject->setStyleSheet(QString::fromUtf8("height:50px;"));

        gridLayout_3->addWidget(subject, 2, 0, 1, 1);

        timerLabel = new QLabel(groupBox);
        timerLabel->setObjectName("timerLabel");
        QFont font;
        font.setFamilies({QString::fromUtf8("Ubuntu")});
        timerLabel->setFont(font);

        gridLayout_3->addWidget(timerLabel, 4, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(class9);

        QMetaObject::connectSlotsByName(class9);
    } // setupUi

    void retranslateUi(QDialog *class9)
    {
        class9->setWindowTitle(QCoreApplication::translate("class9", "Dialog", nullptr));
        groupBox->setTitle(QString());
        start->setText(QCoreApplication::translate("class9", "Go", nullptr));
        label->setText(QCoreApplication::translate("class9", "*Read the instructions below carefully:\n"
"1.Carefully choose the subject. You can choose subject only once.\n"
"2.After you choose subject and click 'Go' Your timer will be started.", nullptr));
        prevButton->setText(QCoreApplication::translate("class9", "Previous", nullptr));
        nextButton->setText(QCoreApplication::translate("class9", "Next", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("class9", "GroupBox", nullptr));
        questionLabel->setText(QCoreApplication::translate("class9", "Text", nullptr));
        option1->setText(QCoreApplication::translate("class9", "option1", nullptr));
        option2->setText(QCoreApplication::translate("class9", "option2", nullptr));
        option3->setText(QCoreApplication::translate("class9", "option3", nullptr));
        option4->setText(QCoreApplication::translate("class9", "option4", nullptr));
        homeButton->setText(QCoreApplication::translate("class9", "Return Home", nullptr));
        logo5->setText(QCoreApplication::translate("class9", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("class9", "Examination Class 9", nullptr));
        timerLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class class9: public Ui_class9 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASS9_H
