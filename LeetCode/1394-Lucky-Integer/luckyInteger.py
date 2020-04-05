class Solution:
    def findLucky(self, arr: List[int]) -> int:
        d = {}
        for i in arr:
            if i not in d:
                d[i] = 1
            else:
                d[i]+=1
        max = -1
        for key,value in d.items():
            if key==value and key>max:
                max = key
        return max
                