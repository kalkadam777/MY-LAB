from random import randrange


n = int(input())

a = []

for i in range(n):
    a.append(randrange(1,100+1))
print(a)

for i in range(0,n,2):
    print(a[i],end=' ')
