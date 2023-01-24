from random import randrange


n =  int(input())

a = [0]*n
b = [0]*n

for i in range(n):
    a[i] = randrange(-10,10)
    b[i] = randrange(-10,10)

print(a,b)
a,b = b,a
print(a,b)
