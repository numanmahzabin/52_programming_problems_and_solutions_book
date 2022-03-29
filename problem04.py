import math
t = int(input())
for x in range(0, t):
    n = int(input())
    divisor = []
    print('Case ',x + 1,':', sep='',end='')
    for i in range(1, int(math.sqrt(n) + 1)):
        if n % i == 0:
            divisor.append(i)
            divisor.append(n // i)
    divisor = sorted(divisor)
    for k in divisor:
        print(' ', k, sep='',end='')
    print()