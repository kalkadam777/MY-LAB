from random import randrange


n = int(input())

l = []

for i in range(n):
    l.append(randrange(1,100+1))

print(l)

print(l.index(max(l)) or l.index(min(l)))