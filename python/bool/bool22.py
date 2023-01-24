x = int(input())
a = int(x/100)
b = int(x/10)%10
c = x%10
print(a<b<c or a>b>c)