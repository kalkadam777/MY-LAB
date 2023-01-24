l = []

n = int(input())

summ = 0

while n!=0:
    l.append(n)
    n = int(input())

for i in range(len(l)):
    print(l[i],end=' ')
    if l[i]>0 and l[i]%2==0:
        summ+=l[i]
    else:
        summ+=0
print()
print(summ)