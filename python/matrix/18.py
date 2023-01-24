from random import randrange


n = int(input())
m = int(input())
k = int(input())

l = [[randrange(-10,10) for j in range(m)] for i in range(n)]

for i in range(n):
    for j in range(m):
        print(l[i][j],end='\t')
    print()
Sum = 0

for i in range(n):
    Sum+=l[i][k]
print(Sum)
