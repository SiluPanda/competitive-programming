def findPairs(nums, k):
    F = {}
    for x in nums:
        if x not in F.keys():
            F[x] = 1
        else:
            F[x] += 1
    if k == 0:
        res = 0
        for k in F.keys():
            if F[k] > 1:
                res += 1
        return res
    res = 0
    for i in F.keys():
        if i+k in F.keys():
            res += 1
    return res

nums = [int(s) for s in input().split()]
k = int(input())
print(findPairs(nums, k))
