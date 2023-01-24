n =int(input())
rez = 0
for i in range(1,n+1,1):
    rez+=1/i
    print(1/i,end=' ')
print()
print(rez)