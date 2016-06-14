#include <QCoreApplication>
#include"E:\include\python\python.h"
#include<iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    cerr<<"1"<<endl;
    PyObject *pModule, *pFunc, *pValue;
    cerr<<"2"<<endl;
    Py_Initialize();
    cerr<<"3"<<endl;

    pModule=PyImport_ImportModule("wadd");
    cerr<<"4"<<endl;
    pValue=PyObject_CallMethod(pModule,"twadd","ii",10,20);

    cerr<<"5"<<endl;
    cerr<<PyLong_AsLong(pValue)<<endl;

    cerr<<"6"<<endl;
    pFunc=PyObject_GetAttrString(pModule, "twadd");
    cerr<<"7"<<endl;
    pValue=PyObject_CallFunction(pFunc,"ii",1000,22);
    cerr<<"8"<<endl;
    cout<<PyLong_AsLong(pValue)<<endl;
    cerr<<"9"<<endl;
    Py_Finalize();

    return a.exec();
}
