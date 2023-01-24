a = int(input())
b = int(input())

for i in range(b-1,a+1,-1):
    print(i,end=' ')
print()
print(len(range(b-1,a+1,-1)))