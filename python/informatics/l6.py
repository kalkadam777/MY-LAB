n = list(map(int, input().split()))
c = 0
for i in range(1,len(n)-1):
    if n[i-1]<n[i]>n[i+1]:
        c+=1
print(c)