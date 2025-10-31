class Solution:
    def getSneakyNumbers(self, nums: List[int]) -> List[int]:
        # n = set(nums)
        # return nums-n

        seen = set()
        dupes = []
        for num in nums:
            if num in seen:
                dupes.append(num)
            else:
                seen.add(num)
        return dupes
        