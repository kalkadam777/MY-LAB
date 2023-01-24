from random import randrange


n = int(input())

l = []

for i in range(n):
    l.append(randrange(1,100+1))
print(l)
minn = l[0]
for i in range(n):
    if minn>l[i]:
        minn = l[i]
        imin = i
print(imin)