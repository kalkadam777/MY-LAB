n = int(input())

l = []

for i in range(n):
    l.append(float(input()))

c = 0
for i in range(1,len(l)):
    if l[i-1]<l[i]:
        c+=1
    else:
        print(i)
        break
if c==len(l):
    print(0)