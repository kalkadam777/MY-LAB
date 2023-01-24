n = int(input())
s=1
rez = 0
for i in range(11,n+11,1):
    tmp=i*s 
    s*=-1
    rez+=tmp/10
print(rez)