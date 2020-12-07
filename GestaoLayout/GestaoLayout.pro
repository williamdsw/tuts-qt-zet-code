#-------------------------------------------------
#
# Project created by QtCreator 2017-09-10T18:23:28
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GestaoLayout
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
    01_PosicaoAbsoluta.cpp \
    02_VBoxLayout.cpp \
    02_Main.cpp \
    03_Main.cpp \
    03_HBoxLayout.cpp \
    04_Main.cpp \
    04_ListWidget.cpp \
    05_FormLayout.cpp \
    05_Main.cpp \
    06_GridLayout.cpp \
    06_Main.cpp \
    07_Revisao.cpp \
    07_Main.cpp

HEADERS += \
    02_VBoxLayout.h \
    03_HBoxLayout.h \
    04_ListWidget.h \
    05_FormLayout.h \
    06_GridLayout.h \
    07_Revisao.h

FORMS +=

DISTFILES += \
    00_Intro.txt
