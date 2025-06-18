# stacks in python using linked list
class Node:
     def __init__(self,value):
          self.data=value
          self.next=None

class stack:
     def __init__(self):
          self.head=None
          self.size=0
     def push(self,value):
          new_node=Node(value)
          if self.head:
               new_node.next=self.head
          self.head=new_node
          self.size+=1
     def pop(self):
          if self.isEmpty():
               return 'stack is empty'
          popednode=self.head
          


# node1=Node(11)
# print(node1)