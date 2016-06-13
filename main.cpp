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

    pModule=PyImport_ImportModule("wadd");    //mat是我自己用python写的一个小模块(mat.py)，里面内容见后面附录
    cerr<<"4"<<endl;
    pValue=PyObject_CallMethod(pModule,"twadd","ii",10,20);   //通过上面得到的模块直接访问模块里面的函数add(a,b)
                                                                              //注意这里的"ii"事实上相当于C中的"%d%d"的功能，请参考文档
    cerr<<"5"<<endl;
    cerr<<PyLong_AsLong(pValue)<<endl;            //将得到的pValue值转换为C中的long型

    cerr<<"6"<<endl;
    pFunc=PyObject_GetAttrString(pModule, "twadd");  //也可以使用该函数得到函数对象
    cerr<<"7"<<endl;
    pValue=PyObject_CallFunction(pFunc,"ii",1000,22);    //通过函数对象执行函数
    cerr<<"8"<<endl;
    cout<<PyLong_AsLong(pValue)<<endl;
    cerr<<"9"<<endl;
    Py_Finalize();

    return a.exec();
}
