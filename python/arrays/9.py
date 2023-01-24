from random import randrange


n = int(input())

l = []

for i in range(n):
    l.append(randrange(1,100+1))
print(l)
l1 = []
k = 0
for i in l:
    if i%2==0:
        l1.append(i)
        k+=1
print(l1[::-1])
print(k)

