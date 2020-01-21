nk = [int(s) for s in input().split()]
n = nk[0]
k = nk[1]
arr = [int(s) for s in input().split()]
sorted(arr, reverse=True)
lim = arr[k-1]
ans = 0
for x in arr:
    if x > 0 and x >= lim:
        ans += 1
print(ans)
