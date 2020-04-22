def lower_bound(arr, low, high, x):
    while low < high:
        mid = (low + high) // 2
        if arr[mid] > x:
            high = mid-1
        else:
            low = mid
    return low

n = int(input())
arr = [int(s) for s in input().split()]
q = int(input())
for _ in range(q):
    x = int(input())
    print(lower_bound(arr, 0, len(arr), x))
