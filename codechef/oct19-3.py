tt = int(input())
for _ in range(tt):
    nk = [int(s) for s in input().split()]
    n = nk[0]
    k = nk[1]
    a = [int(s) for s in input().split()]
    p = int(k/n)
    for i in range(p%3):
        for x in range(n):
            a[x]^=a[n-x-1]
    for i in range(k%n):
        a[i]^=a[n-i-1]
    for x in a:
        print(x, end = " ")
    print()
