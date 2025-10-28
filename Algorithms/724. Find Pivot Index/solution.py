class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        
        pivot = 0
    
        left_sum, right_sum = 0, sum(nums)-nums[0]

        while pivot < len(nums)-1 and left_sum != right_sum:
                pivot += 1
                left_sum += nums[pivot-1]
                right_sum -= nums[pivot]

        if left_sum == right_sum:
            return pivot
        else:
            return -1