from math import sqrt

def isprime(n):
    if n == 1:
        return False
    if n == 2 or n == 3:
        return True
    if n%2 == 0 or n%3 == 0:
        return False
    for i in range(5, int(sqrt(n))+1, 6):
        if n%i == 0 or n%(i+2) == 0:
            return False
    return True

def tprime(n):
    st = sqrt(n)
    if st != int(st):
        return False
    return isprime(st)

n = int(input())
arr = [int(x) for x in input().split()]
for x in arr:
    if tprime(x):
        print("YES")
    else:
        print("NO")

