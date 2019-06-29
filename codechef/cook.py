def minimin_rem(arr):
    l = sorted(set(arr))
    if len(l) == 0:
        return 0
    return l[-2]


    
n = int(input())
arr = [int(s) for s in input().split()]
print(minimin_rem(arr))