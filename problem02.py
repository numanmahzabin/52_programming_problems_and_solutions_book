# problem 02 [following a different approach]
t = int(input())
while t != 0:
    n = input()
    n = n[len(n) - 1]
    if ord(n) % 2 == 0:
        print('even')
    else:
        print('odd')
    t = t - 1