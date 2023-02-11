n = int(input())
l = []
while n!=0:
  l.append(n)
  n = int(input())   
i=0
max_count=0
count = 0
while i<len(l)-1:
    if l[i]==l[i+1]:
        count+=1
    else:
        max_count=max(max_count,count)
        count=0
    i+=1
if max_count<count:
    max_count = count
print(max_count+1)