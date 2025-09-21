import bisect
class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        # Index stores the target index if found or it stores the index where the target would be if present
        index = bisect.bisect_left(nums, target)
        return index
