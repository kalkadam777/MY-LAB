a = int(input())

if a%4==0 and a%100!=0:
    print(366)
elif a%100==0 and a%400==0:
    print(366)
else:
    print(365)