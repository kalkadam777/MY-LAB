a = int(input())
b = int(input())
c = int(input())
cnt = 0 
cnt1=0
if a>0:
    cnt+=1
elif a<0:
    cnt1+=1
if b>0:
    cnt+=1
elif b<0:
    cnt1+=1
if c>0:
    cnt+=1
elif c<0:
    cnt1+=1
print(cnt,cnt1)