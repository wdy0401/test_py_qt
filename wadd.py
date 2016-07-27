# -*- coding: utf-8 -*-'
import os,re,sys
sys.path.append('C:\\Anaconda3\\python35.zip')
sys.path.append('C:\\Anaconda3\\DLLs')
sys.path.append('C:\\Anaconda3\\lib')
sys.path.append('C:\\Anaconda3')
sys.path.append('C:\\Anaconda3\\lib\\site-packages')
sys.path.append('C:\\Anaconda3\\lib\\site-packages\\Sphinx-1.4.1-py3.5.egg')
sys.path.append('C:\\Anaconda3\\lib\\site-packages\\win32')
sys.path.append('C:\\Anaconda3\\lib\\site-packages\\win32\\lib')
sys.path.append('C:\\Anaconda3\\lib\\site-packages\\Pythonwin')
sys.path.append('C:\\Anaconda3\\lib\\site-packages\\setuptools-23.0.0-py3.5.egg')
sys.path.append('C:\\Wind\\Wind.NET.Client\\WindNET\\bin')

import urllib.request as u2
import datetime
import numpy as np
from WindPy import *


dailyprice=dict()

def twadd(a,b):
	i=1
	sum=0
	while i<200000:
		sum+=i
		i+=1
	print(sum)
	return 0

def twmul(a,b):
	i=1
	sum=0
	while i<200000:
		sum+=i
		i+=1
	print(sum)
	return 0
    
def downloadhtml():
    d=dict()
    url="http://www.sse.com.cn/assortment/options/disclo/preinfo"
    req = u2.Request(url)
    f = u2.urlopen(req)

    body=0
    arr=list()
    each=str()
    tsd=0

    for eachLine in f:
        line = eachLine.strip()
        line=line.decode()                    
        if(re.search(r'var\s+toshowDate',line)):
            pass
        if(not re.search(r'list:\[',line) and body==0):
            continue
        if(re.search(r'\'\',',line)):
            continue
        if(re.search(r'\[',line)):
            body+=1
        if(re.search(r'\]',line)):
            body-=1
        line=re.sub(r'(\[|\])','',line)
        if(body==2):
            each=each+line
        else:
            each=re.sub(r'\s+','',each)
            each=re.sub(r'\'','',each)
            if(each!=""):
                arr.append(each)
            each=""
    for ar in arr:
        d[str(list(re.split(r',',ar))[0])]=str(list(re.split(r',',ar))[1])
        print(str(list(re.split(r',',ar))[1]))
    return d
 



    
def loadprc():
    global w
    print("1")
    w.start()
    print("2")
    a=w.wsd("510050.SH", "close,open", "2015-02-01", str(datetime.now().strftime("%Y-%m-%d")), "")
    print("3")
    col=len(a.Data)
    print("4")
    row=len(a.Data[0])
    print("5")
    for r in range(row):
        d=list()
        for c in range(col):
            d.append(str(a.Data[c][r]))
        tim=re.sub(r"\s+.*$","",str(a.Times[r]))
        tim=re.sub(r"\-","",tim)
        dailyprice[tim]=float(a.Data[0][r])
        print(tim,a.Data[0][r])
    w.close()
   
print(sys.path)
a = np.array([1, 2, 3, 4])
print(a)
downloadhtml()
loadprc()