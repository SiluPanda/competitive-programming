class Solution:
    def lower_limit(self, arr, target):
        N = len(arr)
        low, high = 0, N-1
        while low < high:
            mid = (low + high) // 2
            if arr[mid] < target:
                low = mid + 1
            else:
                high = mid
        return low

    def subarraySum_1st(self, nums, k: int) -> int:
        N = len(nums)
        F = dict()
        prefix_sum = [0 for x in range(N+1)]
        for i in range(1, N+1):
            prefix_sum[i] = prefix_sum[i-1] + nums[i-1]
        F = dict()
        for i in range(N+1):
            if prefix_sum[i] in F:
                F[prefix_sum[i]].append(i)
            else:
                F[prefix_sum[i]] = [i]
        total = 0
        for i in range(1, N+1):
            required = prefix_sum[i] - k
            if required in F:
                indexes = F[required]
                #print(indexes, i)
                num_ele = self.lower_limit(indexes, i)
                #print("num_ele: {}".format(num_ele))
                if num_ele == len(indexes)-1 and indexes[num_ele] < i:
                    total += num_ele + 1
                else:
                    total += num_ele
        return total
    def subarraySum_2nd(self, nums, k):
        N, curr_sum, total = len(nums), 0, 0
        F = {0 : 1}
        for i in range(N):
            curr_sum += nums[i]
            if curr_sum - k in F:
                total += F[curr_sum - k]
            if curr_sum in F:
                F[curr_sum] += 1
            else:
                F[curr_sum] = 1
        return total
            



nums = [int(s) for s in input().split()]
k = int(input())
sol = Solution()
print(sol.subarraySum_2nd(nums, k))