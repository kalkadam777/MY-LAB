k = int(input())
n = int(input())

l = []

while n!=0:
    l.append(n)
    n = int(input())
c = 0
for i in range(0,len(l)):
    if l[i]>k:
        print(i)
        break
    else:
        c+=1
if c==len(l):
    print(0)