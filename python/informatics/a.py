l = list(map(int,input().split()))
l1 = []
for i in l:
    if i%2!=0:
        l1.append(i)
if len(l1)==0:
    print(0)
else:
    print(min(l1))
