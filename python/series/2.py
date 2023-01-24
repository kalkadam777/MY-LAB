l = []

n = int(input())

for i in range(n):
    l.append(int(input()))
print(l)
rez = 1
for i in l:
    rez*=i
print(rez)