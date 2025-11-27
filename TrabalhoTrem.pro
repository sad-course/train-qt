#-------------------------------------------------
#
# Project created by QtCreator 2016-04-15T06:45:49
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TrabalhoTrem
TEMPLATE = app


SOURCES += main.cpp\
        server/windowTrainController.cpp \
        server/train.cpp

HEADERS  += headers/mainwindow.h \
    headers/train.h

FORMS    += mainwindow.ui

CONFIG  += c++20
LIBS += -pthread

DISTFILES += \
    trem.png

RESOURCES += \
    trem-ico.qrc
