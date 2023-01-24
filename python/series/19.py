from random import randrange


n = int(input())

l = []

for i in range(n):
    l.append(randrange(-100,100+1))
print(l)
k = 0
for i in range(1,len(l)):
    if l[i-1]>l[i]:
        k+=1
        print(l[i],end=' ')
print()
print(k)