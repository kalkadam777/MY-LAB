from random import randrange


n = int(input())
k = int(input())
a = []

for i in range(n):
    a.append(randrange(1,100+1))
print(a)
for i in range(0,n,k):
    print(a[i],end=' ')
# i = 0
# while i*k<n:
#     print(a[i*k],end=' ')
#     i+=1

