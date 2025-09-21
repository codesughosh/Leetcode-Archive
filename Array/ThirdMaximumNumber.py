class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        nums = list(set(nums)) # To remove duplicate entries
        nums.sort(reverse=True)
        if len(nums) >= 3:
            return nums[2]
        else: 
            return nums[0]
