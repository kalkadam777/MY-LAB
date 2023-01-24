from random import randrange


n = int(input())
l = []
for i in range(n):
    l.append(randrange(-100,100+1))
l = sorted(l)
print(l)
