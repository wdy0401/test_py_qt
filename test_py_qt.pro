#-------------------------------------------------
#
# Project created by QtCreator 2016-06-13T15:41:27
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = qt_call_py
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp

OTHER_FILES += \
    wadd.py







LIBS += -L$$PWD/../libs/pylibs/ -lpython35

INCLUDEPATH += e:\include\python

#程序需要在path中找到python的LIb 只需要Lib里的部分内容  但挑出需要的对以后扩展不利 而且一共只有30M+ 可以全包括进去
#看pyc文件便知哪些py文件被用到了

#注意版本一致  32位 64位问题
#object.h 中需要做如下修改 不明为何
#//PyType_Slot *slots; /* terminated by slot==0. */
#PyType_Slot *slots1; /* terminated by slot==0. */
