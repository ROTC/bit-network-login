#-------------------------------------------------
#
# Project created by QtCreator 2014-04-12T17:34:38
#
#-------------------------------------------------

QT       += core gui \
            network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = campus_login
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    md5.cpp

HEADERS  += mainwindow.h \
    md5.h

FORMS    += \
    mainwindow.ui
