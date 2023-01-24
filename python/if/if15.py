a = int(input())
b = int(input())
c = int(input())

if a<b and a<c:
    x = b+c
    print(x)
elif b<a and b<c:
    x = a+c
    print(x)
elif c<a and c<b:
    x = a+b
    print(x)