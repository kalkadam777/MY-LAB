from random import randrange


n = int(input())

a = [0]*n

for i in range(n):
    a[i] = randrange(-10,10)
b = a[1:n:2]
print(a)
print(b, len(b))