n = int(input())
rez = 0
fact = 1
for i in range(1,n+1):
    fact*=i
for i in range(0,n+1):
    rez += 1/fact
print(rez)