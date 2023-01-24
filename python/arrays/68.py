from random import randrange


n = int(input())

l = [0]*n

for i in range(n):
    l[i] = randrange(-10,10)
print(l)
a = l.index(min(l))
b = l.index(max(l))
l[a],l[b] = l[b],l[a]
print(l)
