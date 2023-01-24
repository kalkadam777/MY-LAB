from random import randrange


n = int(input())
k = int(input())
a = [0]*n

for i in range(n):
    a[i] = randrange(-10,10)
print(a)
a.pop(k)
print(a)

