from random import randrange

l =[]
n = int(input())

for i in range(n):
    l.append(randrange(-100,100+1)/10)
print(l)
rez=1
summ = 0
for i in l:
    rez*=i
    summ+=i
print(summ,rez)