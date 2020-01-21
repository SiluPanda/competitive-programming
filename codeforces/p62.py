from math import sqrt

prime = [True]*1000001
prime[0] = False
prime[1] = False
for i in range(2,1000):
    if prime[i]:
        for p in range(i*i, 1000000, i):
            prime[p] = False
N = int(input())
found = False
for i in range(4, N//2 + 1):
    if prime[i] == False and prime[N-i] == False:
        print(i, N-i)
        break