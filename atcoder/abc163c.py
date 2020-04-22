N = int(input())
arr = [int(s) for s in input().split()]
F = dict()
for i in range(N-1):
    if arr[i] in F.keys():
        F[arr[i]] += 1
    else:
        F[arr[i]] = 1
for i in range(1, N+1):
    if i in F:
        print(F[i])
    else:
        print(0)
