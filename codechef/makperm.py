tt = int(input())
for _ in range(tt):
    n = int(input())
    arr = [int(s) for s in input().split()]
    F = [False] * n
    for x in arr:
        if x <= n:
            F[x-1] = True
    ans = 0
    for x in F:
        ans += (x == False)
    print(ans)

