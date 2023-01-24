a = float(input())
n = int(input())
rez = 0
for i in range(0,n+1):
    rez+=(-1)**i*a**i
    print((-1)**i*a**i,end=' ')
print()
print(rez)
