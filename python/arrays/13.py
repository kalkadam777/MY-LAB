from random import randrange


n = int(input())

l = []

for i in range(n):
    l.append(randrange(1,100))
print(l)
l1 = []
for i in l:
    if i%2!=0:
        l1.append(i)
l1.reverse()
print(l1)