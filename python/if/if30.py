a = int(input())

if a>0 and a<=99 and a%2==0:
    print("четное двузначное число")
elif a>0 and a<=99 and a%2!=0:
    print("нечетное двузначное число")
elif a>99 and a<=999 and a%2==0:
    print("четное трехзначное число")
elif a>99 and a<=999 and a%2!=0:
    print("нечетное трехзначное число")
