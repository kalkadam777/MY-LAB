from random import randrange


n = int(input())


a = [0]*n

for i in range(n):
    a[i] = randrange(-10,10)
print(a)
a = a[0::2]
print(a)
