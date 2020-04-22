from copy import deepcopy
class Solution:
    def checkPossibility(self, nums):
        N = len(nums)
        if N <= 2 or sorted(nums) == nums:
            return True
        nums = [-10000000] + nums + [100000000]
        N += 2
        for i in range(1, N-1):
            if not (nums[i] <= nums[i+1] and nums[i] >= nums[i-1]):
                A = deepcopy(nums)
                B = deepcopy(nums)
                C = deepcopy(nums)
                case1 = True
                case2 = True
                case3 = True
                #case 1
                A[i+1] = A[i]
                for i in range(N-1):
                    if A[i] > A[i+1]:
                        case1 = False
                        break
                #case 2
                B[i] = B[i-1]
                for i in range(N-1):
                    if B[i] > B[i+1]:
                        case2 = False
                        break
                #case3
                C[i-1] = C[i]
                for i in range(N-1):
                    if C[i] > C[i+1]:
                        case3 = False
                 
                
                break

        return case1 or case2 or case3       
        




nums = [int(s) for s in input().split()]
sol = Solution()
print(sol.checkPossibility(nums))


        