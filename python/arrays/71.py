from random import randrange


n = int(input())

a = n*[0]

for i in range(n):
    a[i] = randrange(-10,10)
print(a)
a.reverse()
print(a)