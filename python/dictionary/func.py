from random import randrange
from statistics import mean



def Min(n,k):
    if n>k:
        return n
    else:
        return k

def createList(n,_from,_to):
    l = [0]*n
    for i in range(n):
        l[i] = randrange(_from,_to+1)
    return l

def Max(_list):
    Max = -1e9
    for i in _list:
        if Max<i:
            Max = i
    return Max

def Enter_list(_list):
    for i in _list:
        print(i)

def Reverse(_list):
    return _list[::-1]

def Smooth1(_list,_n):
    l1 = []
    for i in range(_n):
        l1.append(mean(_list()))
    return l1

def addCar(c,m,y,mV,f0):
    car = {}
    car['comp']=c
    car['model'] = m
    car['year']=y
    car['max speed'] = mV
    car['from 0 to 100'] = f0
    return car

def addPhone(m,c,ss,r,pm,wf,g,sc,cr,os,p):
    Smartphones = {}
    Smartphones['Model'] = m
    Smartphones['Color'] = c
    Smartphones['Screen Size(in)'] = ss
    Smartphones['RAM(GB)'] = r
    Smartphones['Chipset Model'] = pm
    Smartphones['Wi-FI'] = wf
    Smartphones['5G Support'] = g
    Smartphones['Storage Capacity(GB)'] = sc
    Smartphones['Camera(MP)'] = cr
    Smartphones['Operating System'] = os
    Smartphones['Price(T)'] = p
    return Smartphones
    
    
    
    
    

