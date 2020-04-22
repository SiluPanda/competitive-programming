tt = int(input())
for _ in range(tt):
    ND = [int(s) for s in input().split()]
    N, D = ND[0], ND[1]
    arr = [int(s) for s in input().split()]
    arr.sort(reverse=True)
    ret = 0
    i = 0
    while True:
        if i >= len(arr):
            break
        if i < len(arr)-1 and arr[i]-arr[i+1] < D:
            ret += arr[i]+arr[i+1]
            i += 2
        else:
            i += 1
    print(ret)
            
