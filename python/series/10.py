from random import randrange
l = []
n = int(input())

for i in range(n):
    l.append(randrange(-100,100+1))
print(l)

k = 0

for i in l:
    if i>0:
        k+=1

if k>0:
    print("TRUE")
else:
    print("FALSE")