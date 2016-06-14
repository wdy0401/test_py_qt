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

//    cerr<<"##4"<<endl;
//    pValue=PyObject_CallMethod(pModule,"twadd","ii",10,20);
//    cerr<<"##5"<<endl;
//    cerr<<PyLong_AsLong(pValue)<<endl;

    pFunc=PyObject_GetAttrString(pModule, "twadd");
    pValue=PyObject_CallFunction(pFunc,"ii",1000,1000);
    pValue=PyObject_CallFunction(pFunc,"ii",10000,100);
    pValue=PyObject_CallFunction(pFunc,"ii",1000000);
    pValue=PyObject_CallFunction(pFunc,"ii",1000000);
    pValue=PyObject_CallFunction(pFunc,"ii",1000000);
    pValue=PyObject_CallFunction(pFunc,"ii",1000000);
    pValue=PyObject_CallFunction(pFunc,"ii",1000000);

    Py_Finalize();

    return a.exec();
}
//    pModule=PyImport_ImportModule("wadd");
//    cerr<<"##4"<<endl;
//    pValue=PyObject_CallMethod(pModule,"twadd","ii",10,20);
//    cerr<<"##5"<<endl;
//    cerr<<PyLong_AsLong(pValue)<<endl;

//    cerr<<"##6"<<endl;
//    pFunc=PyObject_GetAttrString(pModule, "twadd");
//    cerr<<"##7"<<endl;
//    pValue=PyObject_CallFunction(pFunc,"ii",1000);
//    cerr<<"##8"<<endl;
//    cout<<PyLong_AsLong(pValue)<<endl;
//    cerr<<"##9"<<endl;
//    pValue=PyObject_CallFunction(pFunc,"ii",1000,10);
//    cout<<PyLong_AsLong(pValue)<<endl;
//    pValue=PyObject_CallFunction(pFunc,"ii",1000);
