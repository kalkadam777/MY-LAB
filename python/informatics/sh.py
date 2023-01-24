l = list(map(int,input().split()))
a = int(input())
l.append(a)
l.sort()
l.reverse()
c = 0
for i in l:
    if i==a:
        c+=1
if c-1>0:
    print(l[::-1].index(a)+1)
else:
    print(l.index(a)+1)
    