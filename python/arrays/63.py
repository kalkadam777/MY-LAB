from random import randrange
a = [0]*5
b = [0]*5

for i in range(5):
    a[i] = randrange(-10,10)
    b[i] = randrange(-10,10)
c = a+b
c.sort()
print(c)