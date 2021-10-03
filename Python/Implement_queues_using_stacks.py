'''
Problem Description:
Implement a first in first out (FIFO) queue using only two stacks. The implemented queue should support all the functions of a normal queue (push, peek, pop, and empty).
'''

class MyQueue:

    def __init__(self):
        self.main = []
        self.helper = []

    def push(self, x: int) -> None:
        self.main.append(x)

    def pop(self) -> int:
        while len(self.main) > 1:
            self.helper.append(self.main.pop())
            
        top = self.main.pop()
        
        while len(self.helper) > 0 :
            self.main.append(self.helper.pop())

        return top
    
    def peek(self) -> int:
        while len(self.main) > 1:
            self.helper.append(self.main.pop())
            
        top = self.main.pop()
        
        self.main.append(top)
        while len(self.helper) > 0 :
            self.main.append(self.helper.pop())
        
        return top

    def empty(self) -> bool:
        if self.main:
            return False
        return True
