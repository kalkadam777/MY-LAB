l = list(map(int,input().split()))
n = len(l)
for i in range(0,n-1,2):
    l[i],l[i+1] = l[i+1],l[i]
print(*l)
