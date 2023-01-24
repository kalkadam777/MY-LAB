from random import randrange


def Prod(list):
    rez = 1
    for i in list:
        rez*=i
    return rez

def createList(n,_from,_to):
    l = [0]*n
    for i in range(n):
        l[i] = randrange(_from,_to+1)
    return l

def createMTX(n,m,_from,_to):
    l = [[randrange(_from,_to) for j in range(m)] for i in range(n)]
    return l
def printMTX(_mtx):
    for i in _mtx:
        print(*i)