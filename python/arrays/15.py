from random import randrange


n = int(input())

a = []
a1 = []
a2 = []
for i in range(n):
    a.append(randrange(1,100+1))
print(a)
for i in a:
    if i%2==0:
        a1.append(i)
    else:
        a2.append(i)
a1.reverse()
a3 = a2+a1
print(a3)