'''
Problem Description:
Given a string containing just the characters '(' and ')', find the length of the longest valid (well-formed) parentheses substring.
'''

def longestValidParentheses(self, s: str) -> int:
        l = 0
        r = 0
        
        maxCount = 0
        for ch in s:
            if ch == '(':
                l += 1
            else:
                r += 1
                
            if r == l :
                maxCount = max(maxCount, 2 * l)
            elif r > l :
                r = 0
                l = 0
                
                
        l = 0
        r = 0
        
        
        for ch in reversed(s):
            if ch == '(':
                l += 1
            else:
                r += 1
                
            if r == l :
                maxCount = max(maxCount, 2 * l)
            elif l > r :
                r = 0
                l = 0
        
        return maxCount
