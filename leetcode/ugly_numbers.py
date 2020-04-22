def ugly(n):
    ret = [1, 2, 3, 4, 5]
    while len(ret) < n:
        nums = [ret[-3]*2, ret[-3]*3, ret[-3]*5, ret[-2]*2, ret[-2]*3, 
        ret[-2]*5, ret[-1]*2, ret[-1]*3, ret[-1]*5]
        nums.sort()
        for i in range(len(nums)):
            if nums[i] > ret[-1]:
                ret.append(nums[i])
    print(ret)
    return ret[n-1]

n = int(input())
print(ugly(n))
    
    