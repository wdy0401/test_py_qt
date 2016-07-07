# -*- coding: utf-8 -*-
c=1
c=c*2
print('init')
def twadd(a,b):
	global c
	c=c+a+b	
	print("###add")
	print(a)
	print(b)
	print(c)
	print("###end\n")
	return c

def twmul(a,b):
	global c
	c=2*(c+a+b)	
	print("###mul")
	print(a)
	print(b)
	print(c)
	print("###\n")
	return c

