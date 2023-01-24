from random import randrange


n = int(input())

l = []

for i in range(n):
    l.append(randrange(1,100+1))

print(l)

for i in range(n//2):
    print(l[i],l[n-1-i],end=' ')