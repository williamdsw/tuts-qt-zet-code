#-------------------------------------------------
#
# Project created by QtCreator 2017-09-14T15:29:39
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QWidgetII
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
    01_CheckBox.cpp \
    01_Main.cpp \
    02_ListWidget.cpp \
    02_Main.cpp \
    03_ProgressBar.cpp \
    03_Main.cpp \
    04_Pixmap.cpp \
    04_Main.cpp \
    05_Main.cpp \
    05_Splitter.cpp \
    06_TableWidget.cpp \
    06_Main.cpp

HEADERS += \
    01_CheckBox.h \
    02_ListWidget.h \
    03_ProgressBar.h \
    04_Pixmap.h \
    05_Splitter.h \
    06_TableWidget.h

FORMS +=

DISTFILES += \
    00_Intro.txt
