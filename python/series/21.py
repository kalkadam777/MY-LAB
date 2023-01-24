n = int(input())

l = []

for i in range(n):
    l.append(float(input()))

l1 = sorted(l)

if l==l1:
    print("TRUE")
else:
    print("FALSE")

