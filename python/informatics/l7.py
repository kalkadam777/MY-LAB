n = list(map(int, input().split()))
maxx = -1e9
for i in range(0,len(n)):
    if maxx<n[i]:
        maxx = n[i]
        imax = i
print(maxx,imax)