l = list(map(int,input().split()))
x = int(input())
l.append(x)
l = sorted(l,reverse=True)
print(l.index(x))