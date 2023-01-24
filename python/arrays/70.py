from random import randrange


n = int(input())

l = [0]*n

for i in range(n):
    l[i] = randrange(-10,10)
print(l)
k = -n//2
for i in range(n//2):
    l[i],l[k] = l[k],l[i]
    k+=1
print(l)