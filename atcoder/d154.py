def sum_n(n):
    return (n*(n+1))//2

nk = [int(s) for s in input().split()]
n, k = nk[0], nk[1]
arr = [int(s) for s in input().split()]
if k == 0:
    print(0)
else:
    maxsum = -100000
    currsum = 0
    maxstart = 0
    start, end = 0, k-1
    for i in range(k):
        currsum += arr[k]
    while True:
        if currsum > maxsum:
            maxsum = currsum
            maxstart = start
        if end == n-1:
            break
        currsum += arr[end+1]
        currsum -= arr[start]
        start += 1
        end += 1
    ret = 0
    for i in range(maxstart, maxstart+k):
        if arr[i] == 0:
            ret += 0
        else : ret += sum_n(arr[i])/arr[i]
    print(ret)
