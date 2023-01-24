from random import randrange


b = int(input())
c = int(input())
l = []
for i in range(10):
    l.append(randrange(1,50+1))
l1 = []
c = 0
print(l)
for i in l:
    if i>b and i<c:
        l1.append(i)
    else:
        c+=1
print(l1)
if c == 10:
    print("00")
else:
    print(max(l1),l1.index(max(l1)))

    