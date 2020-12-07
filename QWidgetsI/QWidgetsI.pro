#-------------------------------------------------
#
# Project created by QtCreator 2017-09-12T22:24:57
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QWidgetsI
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    01_Label.cpp \
    01_Main.cpp \
    02_Slider.cpp \
    02_Main.cpp \
    03_Main.cpp \
    03_ComboBox.cpp \
    04_SpinBox.cpp \
    04_Main.cpp \
    05_LineEdit.cpp \
    05_Main.cpp \
    06_StatusBar.cpp \
    06_Main.cpp

HEADERS += \
    01_Label.h \
    02_Slider.h \
    03_ComboBox.h \
    04_SpinBox.h \
    05_LineEdit.h \
    06_StatusBar.h

FORMS +=

DISTFILES += \
    00_Intro.txt \
    01_Pain.txt
