#include"E:\include\python\python.h"
#include<iostream>
using namespace std;

void init_py();

int main()
{
    init_py();

    PyObject *pModule, *pFunc, *pValue_int,*pValue_char;
    pModule=PyImport_ImportModule("wadd");
    pFunc=PyObject_GetAttrString(pModule, "twadd");
    pValue_int=PyObject_CallFunction(pFunc,"ii",10,100);

    pValue_int=PyObject_CallMethod(pModule,"twadd","ii",1,1000);
    cout<<"Int from python\t"<<PyLong_AsLong(pValue_int)<<endl;

    pValue_char=PyObject_CallMethod(pModule,"twmul","ii",1,1000);
    cout<<"char * from python\t"<<PyUnicode_1BYTE_DATA(pValue_char)<<endl;

    Py_Finalize();
    return 0;
}

void init_py()
{
    Py_SetPythonHome((wchar_t *)L"C:/Anaconda3");
     Py_Initialize();
     PyRun_SimpleString("import sys");
     PyRun_SimpleString("sys.path.append('C:\\Anaconda3\\python35.zip')");
     PyRun_SimpleString("sys.path.append('C:\\Anaconda3\\DLLs')");
     PyRun_SimpleString("sys.path.append('C:\\Anaconda3\\lib')");
     PyRun_SimpleString("sys.path.append('C:\\Anaconda3')");
     PyRun_SimpleString("sys.path.append('C:\\Anaconda3\\lib\\site-packages')");
     PyRun_SimpleString("sys.path.append('C:\\Anaconda3\\lib\\site-packages\\Sphinx-1.4.1-py3.5.egg')");
     PyRun_SimpleString("sys.path.append('C:\\Anaconda3\\lib\\site-packages\\win32')");
     PyRun_SimpleString("sys.path.append('C:\\Anaconda3\\lib\\site-packages\\win32\\lib')");
     PyRun_SimpleString("sys.path.append('C:\\Anaconda3\\lib\\site-packages\\Pythonwin')");
     PyRun_SimpleString("sys.path.append('C:\\Anaconda3\\lib\\site-packages\\setuptools-23.0.0-py3.5.egg')");
     PyRun_SimpleString("sys.path.append('C:/Wind/Wind.NET.Client/WindNET/bin')");
}
