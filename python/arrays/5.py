n = int(input())
# 1 1 2 3 5 8 13
l = [1,1]
for i in range(2,n):
    l.append(l[i-2]+l[i-1])

print(l)