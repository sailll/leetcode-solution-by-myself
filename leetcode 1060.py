class Solution(object):
    def missingElement(self, nums, k):
        for i in range(len(nums)-1):
            if nums[i+1] - nums[i] > k:
                return nums[i]+k
            k -= nums[i+1] - nums[i] - 1
        return nums[-1] + k
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        