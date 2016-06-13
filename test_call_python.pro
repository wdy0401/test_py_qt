#-------------------------------------------------
#
# Project created by QtCreator 2016-06-13T15:41:27
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = test_call_python
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp

OTHER_FILES += \
    wadd.py







LIBS += -L$$PWD/../libs/pylibs/ -lpython35

INCLUDEPATH += e:\include\python

#注意版本一致  32位 64位问题
#object.h 中需要做如下修改 不明为何
#//PyType_Slot *slots; /* terminated by slot==0. */
#PyType_Slot *slots1; /* terminated by slot==0. */
