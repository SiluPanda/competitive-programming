nm = [int(s) for s in input().split()]
pp = nm[0]
n, m = nm[0], nm[1]
while n//m > 0:
    pp += n // m
    n = (n//m) + (n%m)
print(pp)

