class Solution:
    def firstUniqChar(self, s: str) -> int:
        count = collections.Counter(s)
        
        # find the index
        for i, character in enumerate(s):
            if count[character] == 1:
                return i     
        return -1
