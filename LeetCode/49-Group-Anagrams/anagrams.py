class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        d = {}
        for i in strs:
            arr = "".join(sorted(list(i)))
            if arr not in d:
                d[arr] = [i]
            else:
                d[arr].append(i)
        a = []
        for i,j in d.items():
            a.append(j)
        return a
        