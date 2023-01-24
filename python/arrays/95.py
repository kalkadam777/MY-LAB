from random import randrange


n = int(input())


a = [0]*n

for i in range(n):
    a[i] = randrange(-10,10)
print(a)
for i in range(len(a)-1,0,-1):
    if a[i]==a[i-1]:
        a.pop(a[i])
print(a)

