/********************************************************************************
** Form generated from reading UI file 'hello.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLO_H
#define UI_HELLO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_hello
{
public:

    void setupUi(QDialog *hello)
    {
        if (hello->objectName().isEmpty())
            hello->setObjectName("hello");
        hello->resize(400, 300);
        hello->setStyleSheet(QString::fromUtf8("*{\n"
"background-color: black;\n"
"}"));

        retranslateUi(hello);

        QMetaObject::connectSlotsByName(hello);
    } // setupUi

    void retranslateUi(QDialog *hello)
    {
        hello->setWindowTitle(QCoreApplication::translate("hello", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class hello: public Ui_hello {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLO_H
