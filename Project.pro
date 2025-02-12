QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/addstudents.cpp \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/changepassword.cpp \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/checkresult.cpp \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/class10.cpp \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/class8.cpp \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/class9.cpp \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/examiner.cpp \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/examinerlogin.cpp \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/main.cpp \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/pastresult.cpp \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/student.cpp \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/studentlogin.cpp \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/studentregistration.cpp \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/teacherregistration.cpp \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/welcome.cpp \
    examinerlogin.cpp \
    main.cpp \
    studentlogin.cpp \
    welcomewindow.cpp

HEADERS += \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/addstudents.h \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/changepassword.h \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/checkresult.h \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/class10.h \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/class8.h \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/class9.h \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/examiner.h \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/examinerlogin.h \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/pastresult.h \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/student.h \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/studentlogin.h \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/studentregistration.h \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/teacherregistration.h \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/ui_addstudents.h \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/ui_class10.h \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/ui_class8.h \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/ui_class9.h \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/ui_examiner.h \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/ui_examinerlogin.h \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/ui_score.h \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/ui_student.h \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/ui_studentlogin.h \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/ui_studentregistration.h \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/ui_teacherregistration.h \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/ui_welcome.h \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/welcome.h \
    examinerlogin.h \
    hello.h \
    studentlogin.h \
    ui_examinerlogin.h \
    ui_studentlogin.h \
    ui_welcome.h \
    welcomewindow.h

FORMS += \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/addstudents.ui \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/changepassword.ui \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/checkresult.ui \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/class10.ui \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/class8.ui \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/class9.ui \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/examiner.ui \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/examinerlogin.ui \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/pastresult.ui \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/student.ui \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/studentlogin.ui \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/studentregistration.ui \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/teacherregistration.ui \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/welcome.ui \
    examinerlogin.ui \
    studentlogin.ui \
    welcomewindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

SUBDIRS += \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/ExamSphereV1.pro

RESOURCES += \
    ../../ExamSphere-main/ExamSphereV1-main/ExamSphereV1/assests.qrc

DISTFILES +=
