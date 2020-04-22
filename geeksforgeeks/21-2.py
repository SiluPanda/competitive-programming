def can_sort(arr, n):
    A = [x for x in arr]
    A.sort()
    if len(A) <= 3:
        return True
    for i in range(n-1):
        for j in range(i+1, n):
            newarr = []
            if i > 0:
                newarr.extend(arr[:i])
            newarr.extend(reversed(arr[i:j+1]))
            if j < n-1:
                newarr.extend(arr[j+1:])

            if newarr == A or newarr == A[::-1]:
                return True
    return False

n = int(input())
arr = [int(s) for s in input().split()]
if can_sort(arr, n) == True:
    print("YES")
else:
    print("NO")


        
