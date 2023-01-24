from random import randrange
l = []
n = int(input())

for i in range(n):
    l.append(randrange(0,100)/10)
print(l)
rez = 1
for i in l:
    rez*=int(i)
    print(int(i),end=' ')
print()
print(rez)