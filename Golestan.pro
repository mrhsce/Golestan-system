#-------------------------------------------------
#
# Project created by QtCreator 2013-06-27T13:47:27
#
#-------------------------------------------------

QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Golestan
TEMPLATE = app


SOURCES += main.cpp\
        loginwindow.cpp \
    barnamehaftegi.cpp \
    resultexam.cpp \
    mainwindow.cpp \
    database.cpp

HEADERS  += loginwindow.h \
    barnamehaftegi.h \
    resultexam.h \
    mainwindow.h \
    database.h

FORMS    += loginwindow.ui \
    barnamehaftegi.ui \
    resultexam.ui \
    mainwindow.ui

RESOURCES += \
    Resources.qrc
