/********************************************************************************
** Form generated from reading UI file 'checkresult.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKRESULT_H
#define UI_CHECKRESULT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CheckResult
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *grade;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *subject;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QLineEdit *idLineEdit;
    QSpacerItem *horizontalSpacer_2;
    QTableWidget *tableWidget;
    QPushButton *checkResult;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;

    void setupUi(QDialog *CheckResult)
    {
        if (CheckResult->objectName().isEmpty())
            CheckResult->setObjectName("CheckResult");
        CheckResult->resize(1148, 706);
        CheckResult->setStyleSheet(QString::fromUtf8("/*QComboBox\n"
"{\n"
"border: 1px solid;\n"
"border-radius: 12px; \n"
"border-color: rgba(33,35,50,255);\n"
"color:#0000ad;\n"
"background-color: rgb(255, 255, 255);\n"
"height:40px;\n"
"}*/\n"
"*{\n"
"	background-color: rgba(33,35,50,255);\n"
"font-family:Ubuntu;\n"
"color:#fff;\n"
"font-size:20px;\n"
"margin:0px;\n"
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
"}\n"
""));
        gridLayout = new QGridLayout(CheckResult);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(CheckResult);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        grade = new QComboBox(CheckResult);
        grade->setObjectName("grade");

        horizontalLayout->addWidget(grade);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(CheckResult);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        subject = new QComboBox(CheckResult);
        subject->setObjectName("subject");

        horizontalLayout_2->addWidget(subject);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(CheckResult);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        idLineEdit = new QLineEdit(CheckResult);
        idLineEdit->setObjectName("idLineEdit");

        horizontalLayout_3->addWidget(idLineEdit);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        tableWidget = new QTableWidget(CheckResult);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        QFont font;
        font.setFamilies({QString::fromUtf8("Ubuntu")});
        font.setPointSize(14);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_4->addWidget(tableWidget);

        checkResult = new QPushButton(CheckResult);
        checkResult->setObjectName("checkResult");
        checkResult->setStyleSheet(QString::fromUtf8("color:#000;\n"
"padding-left:20px;\n"
"padding-right:20px;"));

        horizontalLayout_4->addWidget(checkResult);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        pushButton = new QPushButton(CheckResult);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("color:#000;\n"
"padding-left:20px;\n"
"padding-right:20px;"));

        horizontalLayout_4->addWidget(pushButton);


        gridLayout->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        groupBox = new QGroupBox(CheckResult);
        groupBox->setObjectName("groupBox");
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName("gridLayout_2");

        gridLayout->addWidget(groupBox, 1, 0, 1, 1);


        retranslateUi(CheckResult);

        QMetaObject::connectSlotsByName(CheckResult);
    } // setupUi

    void retranslateUi(QDialog *CheckResult)
    {
        CheckResult->setWindowTitle(QCoreApplication::translate("CheckResult", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("CheckResult", "Class", nullptr));
        label_2->setText(QCoreApplication::translate("CheckResult", "Subject", nullptr));
        label_3->setText(QCoreApplication::translate("CheckResult", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("CheckResult", "exam_type", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("CheckResult", "id", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("CheckResult", "grade", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("CheckResult", "subject", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("CheckResult", "total_marks", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("CheckResult", "obtained_marks", nullptr));
        checkResult->setText(QCoreApplication::translate("CheckResult", "Check", nullptr));
        pushButton->setText(QCoreApplication::translate("CheckResult", "Go Back", nullptr));
        groupBox->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class CheckResult: public Ui_CheckResult {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKRESULT_H
