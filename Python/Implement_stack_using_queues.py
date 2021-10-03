'''
Problem Description:
Implement a last-in-first-out (LIFO) stack using only two queues. The implemented stack should support all the functions of a normal stack (push, top, pop, and empty).
'''

from collections import deque
class MyStack:

    def __init__(self):
        self.main = deque()
        self.helper = deque()

    def push(self, x: int) -> None:
        self.main.append(x)

    def pop(self) -> int:
        while len(self.main) > 1:
            self.helper.append(self.main.popleft())
        
        top = self.main.popleft()
        
        while len(self.helper) > 0:
            self.main.append(self.helper.popleft())
            
        return top
        

    def top(self) -> int:
        while len(self.main) > 1:
            self.helper.append(self.main.popleft())
        
        top = self.main.popleft()
        
        while len(self.helper) > 0:
            self.main.append(self.helper.popleft())
        self.main.append(top)
        
        return top

    def empty(self) -> bool:
        if self.main:
            return False
        return True


