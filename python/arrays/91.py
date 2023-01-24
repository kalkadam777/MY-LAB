from random import randrange


n = int(input())
k = int(input())
l = int(input())

a = [0]*n

for i in range(n):
    a[i] = randrange(-10,10)
print(a)

a = a[:k]+a[l+1:]
print(a)
