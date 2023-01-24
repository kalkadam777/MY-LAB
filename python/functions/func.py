from random import randrange


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
    

