QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    examiner.cpp \
    examinerlogin.cpp \
    main.cpp \
    student.cpp \
    studentlogin.cpp \
    studentregistration.cpp \
    teacherregistration.cpp \
    welcomewindow.cpp

HEADERS += \
    examiner.h \
    examinerlogin.h \
    student.h \
    studentlogin.h \
    studentregistration.h \
    teacherregistration.h \
    ui_examiner.h \
    ui_examinerlogin.h \
    ui_student.h \
    ui_studentlogin.h \
    ui_studentregistration.h \
    ui_teacherregistration.h \
    ui_welcome.h \
    welcomewindow.h

FORMS += \
    examiner.ui \
    examinerlogin.ui \
    student.ui \
    studentlogin.ui \
    studentregistration.ui \
    teacherregistration.ui \
    welcomewindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    Project_V2.pro.user
