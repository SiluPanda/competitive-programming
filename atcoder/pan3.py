from math import sqrt
def solve():
    arr = [int(s) for s in input().split()]
    if sqrt(arr[0]) + sqrt(arr[1]) < sqrt(arr[2]):
        print("Yes")
        return
    print("No")
    return
solve()
