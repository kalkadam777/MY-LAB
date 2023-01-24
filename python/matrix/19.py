from random import randrange


n = int(input())
m = int(input())

l = [[randrange(-10,10) for j in range(m)] for i in range(n)]

for i in range(n):
    for j in range(m):
        print(l[i][j],end='\t')
    print()

for i in range(n):
    print(sum(l[i]))