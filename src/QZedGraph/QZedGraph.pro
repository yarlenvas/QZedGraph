#-------------------------------------------------
#
# Project created by QtCreator 2015-07-09T16:15:31
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QZedGraph
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    pointd.cpp \
    label.cpp \
    margin.cpp \
    margindefaults.cpp

HEADERS  += mainwindow.h \
    pointd.h \
    qzedenums.h \
    label.h \
    margin.h \
    margindefaults.h

FORMS    += mainwindow.ui
