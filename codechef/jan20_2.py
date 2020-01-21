tt = int(input())
for _ in range(tt):
    n = int(input())
    a = int(input())
    s = 2 * (10**n) + a
    print(s, flush = True)
    b = int(input())
    c = (10**n) - b
    print(c, flush = True)
    d = int(input())
    e = (10**n) - d
    print(e, flush = True)
    res = int(input())
    if res == -1:
        break
        