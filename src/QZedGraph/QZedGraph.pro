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
    qzedgraphtypes.cpp

HEADERS  += mainwindow.h \
    pointd.h \
    qzedgraphtypes.h

FORMS    += mainwindow.ui
