from random import randrange


n =  int(input())

l = [0]*n

for i in range(n):
    l[i] = randrange(-10,10)
print(l)
for i in l:
    if i%2==0:
        a = i
        break
for i in range(n):
    if l[i]%2==0:
        l[i]+=a
print(l)