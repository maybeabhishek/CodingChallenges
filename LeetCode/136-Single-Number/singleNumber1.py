class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        d = {}
        for i in nums:
            if i not in d:
                d[i] = 1
            else:
                del d[i]
        for key in d:
            num = key
        return num