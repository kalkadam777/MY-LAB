from random import randrange


n = int(input())


a = [0]*n

for i in range(n):
    a[i] = randrange(-10,10)
print(a)
for i in a[:]:
    if i%2!=0:
        a.remove(i)
print(len(a))
print(a)
