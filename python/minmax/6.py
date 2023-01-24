from random import randrange


n = int(input())
l = []
for i in range(n):
    l.append(randrange(1,100+1))
print(l)
print(len(l) - l[::-1].index(max(l)) - 1)
