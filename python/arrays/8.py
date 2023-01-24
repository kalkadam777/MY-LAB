from random import randrange


n = int(input())

l = []

for i in range(n):
    l.append(randrange(1,100+1))
print(l)
k = 0
for i in l:
    if i%2!=0:
        k+=1
        print(i,end=' ')
print()
print(k)