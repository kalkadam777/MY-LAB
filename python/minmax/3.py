from random import randrange


n = int(input())
a = []
b = []
l = []
for i in range(n):
    a.append(randrange(1,100+1))
    b.append(randrange(1,100+1))
for i in range(n):
    l.append(2*(a[i]+b[i]))
print(l)

print(max(l))