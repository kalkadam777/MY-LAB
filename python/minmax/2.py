from random import randrange


n = int(input())
a = []
b = []
l = []
for i in range(n):
    a.append(randrange(1,101))
    b.append(randrange(1,101))
for i in range(n):
    l.append(a[i]*b[i])
print(l)

print(min(l))