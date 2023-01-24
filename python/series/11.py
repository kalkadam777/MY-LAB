from random import randrange
l = []
n = int(input())
k = int(input())

for i in range(n):
    l.append(randrange(-100,100+1))
print(l)

c = 0

for i in l:
    if i>k:
        c+=1

if c>0:
    print("TRUE")
else:
    print("FALSE")