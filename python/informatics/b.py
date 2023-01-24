l = list(map(int,input().split()))
l1 = list(map(int,input().split()))

l.insert(l1[0],l1[1])
print(*l)

