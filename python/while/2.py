n = int(input())
l = []
l.append(0)
l.append(1)
i = 1
while l[i]<n:
    l.append(l[i]+l[i-1])
    i+=1
if l[i]==n:
    print(i)
else:
    print(-1)
