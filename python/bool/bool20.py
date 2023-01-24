x = int(input())
a = int(x/100)
b = int(x/10)%10
c = int(x%10)
print(a!=b and a!=c and b!=c)
