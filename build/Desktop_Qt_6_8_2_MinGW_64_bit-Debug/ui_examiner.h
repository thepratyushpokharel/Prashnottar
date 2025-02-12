/********************************************************************************
** Form generated from reading UI file 'examiner.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXAMINER_H
#define UI_EXAMINER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_examiner
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *examiner)
    {
        if (examiner->objectName().isEmpty())
            examiner->setObjectName("examiner");
        examiner->resize(1182, 703);
        examiner->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: rgba(33,35,50,255);\n"
"font-family:Ubuntu;\n"
"color:#fff;\n"
"font-size:20px;\n"
"}\n"
"QPushButton\n"
"{\n"
"background-color: #a7abaa;\n"
"color: #fff;\n"
"border-radius: 12px; \n"
"border: 1px solid;\n"
"border-color: rgba(33,35,50,255);\n"
"height:40px;\n"
"margin-left:300px;\n"
"margin-right:300px;\n"
"}"));
        verticalLayout = new QVBoxLayout(examiner);
        verticalLayout->setObjectName("verticalLayout");
        pushButton = new QPushButton(examiner);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(examiner);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(examiner);
        pushButton_3->setObjectName("pushButton_3");

        verticalLayout->addWidget(pushButton_3);


        retranslateUi(examiner);

        QMetaObject::connectSlotsByName(examiner);
    } // setupUi

    void retranslateUi(QDialog *examiner)
    {
        examiner->setWindowTitle(QCoreApplication::translate("examiner", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("examiner", "Check students Result", nullptr));
        pushButton_2->setText(QCoreApplication::translate("examiner", "Take Exams", nullptr));
        pushButton_3->setText(QCoreApplication::translate("examiner", "Go Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class examiner: public Ui_examiner {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXAMINER_H
