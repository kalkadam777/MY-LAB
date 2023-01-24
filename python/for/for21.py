n = int(input())
fact = 1
rez  = 1
for i in range(1,n+1):
    fact*=i
    rez+=1/fact
print(rez)