from random import randrange


n = int(input())
m = int(input())

l = [[0]*m]*n

l = [[randrange(-10,11) for j in range(m)] for i in range(n)]

for i in range(len(l)):
    print(*l[i],sep='\t')

for i in range(n):
    print(sum(l[i]))
