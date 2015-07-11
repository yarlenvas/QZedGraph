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
    margindefaults.cpp \
    fill.cpp \
    linebase.cpp \
    line.cpp \
    symbol.cpp \
    border.cpp \
    link.cpp \
    minortic.cpp \
    majortic.cpp \
    pointpairbase.cpp \
    pointpair.cpp \
    pointpairlist.cpp \
    curveitem.cpp

HEADERS  += mainwindow.h \
    pointd.h \
    qzedenums.h \
    label.h \
    margin.h \
    margindefaults.h \
    fill.h \
    linebase.h \
    line.h \
    symbol.h \
    border.h \
    link.h \
    minortic.h \
    majortic.h \
    pointpairbase.h \
    pointpair.h \
    pointpairlist.h \
    curveitem.h

FORMS    += mainwindow.ui
