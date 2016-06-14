#include <QCoreApplication>
#include"E:\include\python\python.h"
#include<iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    PyObject *pModule, *pFunc, *pValue;
    Py_Initialize();
    pModule=PyImport_ImportModule("wadd");

    pFunc=PyObject_GetAttrString(pModule, "twadd");
    pValue=PyObject_CallFunction(pFunc,"ii",1000000);
    pValue=PyObject_CallFunction(pFunc,"ii",1000000);
    pValue=PyObject_CallFunction(pFunc,"ii",1000000);
    pValue=PyObject_CallFunction(pFunc,"ii",1000000);
    pValue=PyObject_CallFunction(pFunc,"ii",1000000);

    pValue=PyObject_CallMethod(pModule,"twadd","ii",1000000000,20);
    pValue=PyObject_CallMethod(pModule,"twadd","ii",1000000000,20);
    pValue=PyObject_CallMethod(pModule,"twadd","ii",1000000000,20);
    pValue=PyObject_CallMethod(pModule,"twadd","ii",1000000000,20);
    pValue=PyObject_CallMethod(pModule,"twadd","ii",1000000000,20);
    pValue=PyObject_CallMethod(pModule,"twadd","ii",1000000000,20);

    Py_Finalize();

    return a.exec();
}
