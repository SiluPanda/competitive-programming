class Solution:
    def search(self, nums, target: int) -> int:
        N = len(nums)
        low, high = 0, N-1
        while low < high:
            print(low, high)
            mid = (low + high) // 2
            if nums[mid] > nums[high]:
                #pivot on the left of mid
                low = mid + 1
            else:
                high = mid
        #first binary search
        print("pivot index is {}".format(low))
        l = 0
        h = low-1
        while l <= h:
            m = (l + h) // 2
            if nums[m] == target:
                return m
            elif nums[m] > target:
                h = m-1
            else:
                l = m+1
        #second binary search
        l = low
        h = N-1
        while l <= h:
            m = (l + h) // 2
            if nums[m] == target:
                return m
            elif nums[m] > target:
                h = m-1
            else:
                l = m+1
        return -1


nums = [int(s) for s in input().split()]
target = int(input())
sol = Solution()
print(sol.search(nums, target))