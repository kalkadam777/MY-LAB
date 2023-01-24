l = []

n = int(input())

for i in range(n):
    l.append(int(input()))
print(l)
m = 0
for i in l:
    m+=i
m/=n
print(m)