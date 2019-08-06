

def max_sum(arr):
    ans = -100000
    curr_max = 0
    for i in range(len(arr)):
        curr_max += arr[i]
        if ans < curr_max:
            ans = curr_max
        if curr_max < 0:
            curr_max = 0
    return ans

print(max_sum([1,2,3,-4,-5,6,7]))


