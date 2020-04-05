class Solution:
    def isHappy(self, n: int) -> bool:
        notHappy  = set()
        n = str(n)
        while n!='1':
            notHappy.add(n)
            nd = 0
            for d in n:
                nd += int(d)*int(d)
            n = str(nd)
            if n in notHappy:
                return False
            
        
        return True