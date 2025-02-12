/********************************************************************************
** Form generated from reading UI file 'pastresult.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASTRESULT_H
#define UI_PASTRESULT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PastResult
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *subject;
    QPushButton *checkResult;
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QTableWidget *tableWidget;

    void setupUi(QDialog *PastResult)
    {
        if (PastResult->objectName().isEmpty())
            PastResult->setObjectName("PastResult");
        PastResult->resize(1131, 751);
        PastResult->setStyleSheet(QString::fromUtf8("QComboBox\n"
"{\n"
"border: 1px solid;\n"
"border-radius: 12px; \n"
"border-color: rgba(33,35,50,255);\n"
"color:#0000ad;\n"
"	background-color: rgb(255, 255, 255);\n"
"margin-top:20px;\n"
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
"margin-top:20px;\n"
"}\n"
"QGroupBox\n"
"{\n"
"margin-top:20px;\n"
"margin-left:30px;\n"
"margin-right:30px;\n"
"padding-top:30px;\n"
"}"));
        gridLayout = new QGridLayout(PastResult);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(PastResult);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        subject = new QComboBox(PastResult);
        subject->setObjectName("subject");
        subject->setStyleSheet(QString::fromUtf8("height:40px;"));

        horizontalLayout_2->addWidget(subject);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_4->addLayout(verticalLayout);

        checkResult = new QPushButton(PastResult);
        checkResult->setObjectName("checkResult");

        horizontalLayout_4->addWidget(checkResult);

        pushButton = new QPushButton(PastResult);
        pushButton->setObjectName("pushButton");

        horizontalLayout_4->addWidget(pushButton);


        gridLayout->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        groupBox = new QGroupBox(PastResult);
        groupBox->setObjectName("groupBox");
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        tableWidget = new QTableWidget(groupBox);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(tableWidget, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox, 1, 0, 1, 1);


        retranslateUi(PastResult);

        QMetaObject::connectSlotsByName(PastResult);
    } // setupUi

    void retranslateUi(QDialog *PastResult)
    {
        PastResult->setWindowTitle(QCoreApplication::translate("PastResult", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("PastResult", "Subject", nullptr));
        checkResult->setText(QCoreApplication::translate("PastResult", "Check", nullptr));
        pushButton->setText(QCoreApplication::translate("PastResult", "Go back", nullptr));
        groupBox->setTitle(QCoreApplication::translate("PastResult", "GroupBox", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("PastResult", "exam_type", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("PastResult", "id", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("PastResult", "grade", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("PastResult", "total_marks", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("PastResult", "obtained_marks", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PastResult: public Ui_PastResult {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASTRESULT_H
