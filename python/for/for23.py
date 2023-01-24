x = float(input())
n = int(input())
rez = x
fact = 1
for i in range(1,n+1):
    fact*=(2*i+1)
    rez+=(((-1)**i)*(x**(2*i+1)))/fact
print(rez)