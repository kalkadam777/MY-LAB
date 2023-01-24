from random import randrange
from statistics import mean


n = int(input())
m = int(input())

l = [[randrange(-10,10) for j in range(m)] for i in range(n)]

for i in range(n):
    for j in range(m):
        print(l[i][j],end='\t')
    print()

for i in range(n):
    for j in range(1,m,2):
        print(mean(l[i][j]))
    print()
