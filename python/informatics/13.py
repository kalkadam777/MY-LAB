l = list(map(int,input().split()))
a = l.index(max(l))
b = l.index(min(l))

l[a],l[b] = l[b],l[a]

print(*l)


