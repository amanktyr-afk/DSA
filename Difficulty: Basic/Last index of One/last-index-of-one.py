#User function Template for python3

class Solution:
    def lastIndex(self, s: str) -> int:
        n = len(s)
        idx = -1
        for i in range(n-1,-1,-1):
            if int(s[i]) == 1:
                idx = i
                return idx
        return idx
            
            
        
        
