from random import randrange


n = int(input())
m = []
v = []
l = []

for i in range(n):
    m.append(randrange(1,101))
    v.append(randrange(1,101))
    l.append(round(m[i]/v[i],3))
print(l)
imax = 0
maxx = l[0]
for i in range(n):
    if maxx<l[i]:
        maxx = l[i]
        imax = i
print(imax,maxx)

