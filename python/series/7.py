from random import randrange
l = []

n = int(input())

for i in range(n):
    l.append(randrange(-100,100+1)/10)
print(l)
summ = 0
for i in l:
    summ+=round(i)
    print(round(i),end=' ')
print()
print(summ)