n = list(map(int,input().split()))
Min = 1e9
for i in range(0,len(n)):
    if n[i]>0:
        if Min>n[i]:
            Min = n[i]
print(Min)