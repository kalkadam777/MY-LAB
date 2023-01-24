from random import randrange


n = int(input())

a = [0]*n

for i in range(n):
    a[i] = randrange(-10,10)
print(a)

for i in range(0,n-1,2):
    a[i],a[i+1] = a[i+1],a[i]
print(a)