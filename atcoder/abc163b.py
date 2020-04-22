NM = [int(s) for s in input().split()]
N, M = NM[0], NM[1]
arr = [int(s) for s in input().split()]
total = sum(arr)
if total <= N:
    print(N-total)
else:
    print(-1)