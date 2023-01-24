from random import randrange


n = int(input())
k = int(input())
m = int(input())


a = n*[0]

for i in range(n):
    a[i] = randrange(-10,10)
print(a)
for i in range(m):
    a.insert(k+1,0)
print(a)