n = int(input())
arr = [int(s) for s in input().split()]
F = dict()
for i in range(len(arr)):
    m = arr[i]&1
    if m not in F:
        F[m] = [i]
    else:
        F[m].append(i)
if len(F[0]) == 1:
    print(F[0][0]+1)
else:
    print(F[1][0]+1)

