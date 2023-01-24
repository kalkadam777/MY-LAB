k = int(input())
n = int(input())
l = [] 
c = 0
while n!=0:
    l.append(n)
    n = int(input())
for i in l:
    if i<k:
        c+=1
print(c)