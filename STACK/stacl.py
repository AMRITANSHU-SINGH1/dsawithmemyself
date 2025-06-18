class stack:
     def __init__(self):
          self.stack=[]
     def push(self,val):
          self.stack.append(val)
     def peak(self):
          return self.stack[-1]
     def isempty(self):
          return len(self.stack)==0
     def pop(self):
          if self.isempty():
               return "the stack is empty"
          return self.stack.pop()
     def size(self):
          return len(self.stack)
     
          