#include"E:\include\python\python.h"
#include<iostream>
using namespace std;

int main()
{
    PyObject *pModule, *pFunc, *pValue;
//    wchar_t  a[100]=L"C:/Anaconda3/Lib";
//    Py_SetPythonHome(a);
//    这段不管用
    Py_Initialize();

    pModule=PyImport_ImportModule("wadd");

    pFunc=PyObject_GetAttrString(pModule, "twadd");

    pValue=PyObject_CallFunction(pFunc,"ii",10,100);

    pValue=PyObject_CallMethod(pModule,"twadd","ii",1,1000);

    pValue=PyObject_CallMethod(pModule,"twmul","ii",1,1000);

    Py_Finalize();
    return 0;
}
