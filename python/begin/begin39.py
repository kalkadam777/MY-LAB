A = int(input())
B = int(input())
C = int(input())

D = B**2 - 4 * A * C
x1 = (-B + D**0.5)/2 * A
x2 = (-B - D**0.5)/2 * A
print(x1, x2)