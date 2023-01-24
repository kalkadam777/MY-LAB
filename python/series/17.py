from random import randrange

b = float(input())

n = int(input())
l = []

for i in range(n):
    l.append(randrange(-100,100+1)/10)
l = sorted(l)
print(l)

l.append(b)
l = sorted(l)
print(l)
