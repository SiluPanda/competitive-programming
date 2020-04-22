nk = [int(s) for s in input().split()]
n, k = nk[0], nk[1]
arr = [int(s) for s in input().split()]
if k >= n:
    print(0)
else:
    arr.sort()
    print(sum(arr[:n-k]))
