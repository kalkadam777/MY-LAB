from random import randrange


n = int(input())
m = int(input())
# mtx
# 1 method
l = [[randrange(-10,10) for j in range(m)] for i in range(n)]

# 2 method
# l = []
# for i in range(n):
#     l.append([])
#     for j in range(m):
#         l[i].append(randrange(-10,10))



# for
# 1 method
# for i in range(n):
#     print(*l[i],sep='\t')

# 2 method
for i in range(n):
    for j in range(m):
        print(l[i][j],end='\t')
    print()