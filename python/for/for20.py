n = int(input())
fact = 1
rez = 0
for i in range(1,n+1):
    fact*=i
    rez+=fact
print(rez)