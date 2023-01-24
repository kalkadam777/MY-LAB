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
    print(mean(l[i]))

for i in range(n):
    if len(l[i])<mean(l[i]):
        print(len(l[i]))
    # else:
    #     print(0)

