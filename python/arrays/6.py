n = int(input())
a = int(input())
b = int(input())

l = [a,b]

for i in range(2,n):
    l.append(sum(l))

print(l)
# 1 1 2 