from random import randrange


n = int(input())

l = []

for i in range(n):
    l.append(randrange(1,100+1))

print(l)

for i in range(n-1):
    print(l[i],l[i+1],l[n-1-i],l[n-1-(i+1)],end=' ')