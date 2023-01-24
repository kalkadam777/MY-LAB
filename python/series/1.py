from random import randrange

l = []
n = int(input())

for i in range(n):
    l.append(randrange(-10,10+1))

print(l)

s=0
for i in l:
    s+=i
print(s)