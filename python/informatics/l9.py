n = list(map(int,input().split()))
minn = 1e9
c = 0
for i in range(0,len(n)):
    if n[i]%2!=0:
        if minn>n[i]:
            minn = n[i]
    elif n[i]%2==0:
        c+=1

if c==len(n):
    print(0)
else:
    print(minn)