#-------------------------------------------------
#
# Project created by QtCreator 2018-07-01T17:41:29
#
#-------------------------------------------------

QT       += testlib

QT       -= gui

TARGET = tst_calculatortest
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += tst_calculatortest.cpp \
    calculator.cpp
DEFINES += SRCDIR=\\\"$$PWD/\\\"

HEADERS += \
    calculator.h
