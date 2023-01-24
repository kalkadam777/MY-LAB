from random import randrange


n = int(input())


a = [0]*n
l1 = []
for i in range(n):
    a[i] = randrange(-10,10)
print(a)
a.reverse()
for i in range(len(a)):
    if not a[i] in l1:
        l1.append(a[i])
a = l1
a.reverse()
print(a)