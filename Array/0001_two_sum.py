class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        n = len(nums)
        for i in range(n):
            for j in range(i+1,n): # To prevent duplicate
                if target == nums[i]+nums[j]:
                    return [i,j] # Returned value is output in leetcode, not like codeforces
