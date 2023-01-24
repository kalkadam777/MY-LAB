from random import randrange


n = int(input())

a = [0]*n
b = [0]*n
c = [0]*n

for i in range(n):
    a[i] = randrange(-10,10)
    b[i] = randrange(-10,10)
print(a)
print(b)
for i in range(n):
    c[i] = max(a[i],b[i])
print(c)