n = int(input())
rez = 0
for i in range(0,n+1,1):
    rez+=pow((n+i),2)
    print(pow((n+i),2),end=' ')
print()
print(rez)