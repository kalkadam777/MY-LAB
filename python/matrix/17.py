from math import prod
from random import randrange


n = int(input())
m = int(input())
k = int(input())

l = [[randrange(-10,10) for j in range(m)] for i in range(n)]

for i in range(n):
    for j in range(m):
        print(l[i][j],end='\t')
    print()
print(sum(l[k]))
print(prod(l[k]))