n = list(map(int, input().split()))

for i in range(1,len(n)):
    if n[i-1]>0 and n[i]>0 or n[i-1]<0 and n[i]<0 :
        print(n[i-1],n[i])
        break