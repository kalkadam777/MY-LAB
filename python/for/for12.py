n = int(input())
rez = 1
for i in range(11,n+11,1):
    rez*=i/10
print(rez)