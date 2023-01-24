from random import randrange


n = int(input())
m = int(input())

l = [[randrange(-10,10) for j in range(m)] for i in range(n)]

for i in range(n):
    print(*l[i],sep='\t')
for i in range(n):
    prodd = 1
    for j in range(m):
        prodd*=l[j][i]
    print(prodd)

