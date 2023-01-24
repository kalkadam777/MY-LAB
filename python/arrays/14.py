from random import randrange


n = int(input())

l = []
l1 = []
l2 = []

for i in range(n):
    l.append(randrange(1,100+1))
print(l)
for i in l:
    if i%2==0:
        l1.append(i)
    else:
        l2.append(i)
l3 = l1+l2
print(l3)



