from random import randrange


n = int(input())

a = n*[0]

for i in range(n):
    a[i] = randrange(-10,10)
print(a)
m = a.index(min(a))
s = a.index(max(a))

a.insert(m,0)
a.insert(s+1,0)
print(a)