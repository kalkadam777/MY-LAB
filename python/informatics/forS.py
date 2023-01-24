n = int(input())
rez = 0
for i in range(0,n+1):
    rez+=((-1)**i)/(2*i+1)
print(4*rez)