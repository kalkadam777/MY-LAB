l = list(map(int,input().split()))
n = len(l)
k = -1
for i in range(n//2):
    l[i],l[k] = l[k],l[i]
    k-=1
print(*l)