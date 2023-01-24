from random import randrange


n = int(input())
l = []
for i in range(n):
    l.append(randrange(1,100+1))

print(l)

l1 = []
l2 = []

for i in l:
    if i%2==0:
        l1.append(i)
    elif i%2!=0:
        l2.append(i)
l2.reverse()
l1.extend(l2)
print(l1)