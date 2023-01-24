from random import randrange
l = []
n = int(input())

for i in range(n):
    l.append(randrange(-100,100+1)/10)
print(l)
s = 0
for i in l:
    s+=int(i)
    print(int(i),end=' ')
print()
print(s)