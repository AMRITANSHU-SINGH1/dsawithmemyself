
#doubly linked list
class Node:
     def __init__(self,data):
          self.prev=None
          self.data=data
          self.next=None

node1=Node(5)
node2=Node(545)
node3=Node(65)
node4=Node(9)

node1.next=node2
node2.next=node3
node3.next=node4

node4.prev=node3
node3.prev=node2
node2.prev=node1

print("the transversing forword:")
currentNode=node1
while currentNode:
     while currentNode:
          print(currentNode.data,end=" -> ")
          currentNode=currentNode.next
print("null")

print("transversing backward:")
currentNode=node4
while currentNode:
     while currentNode:
          print(currentNode.data,end=" -> ")
          currentNode=currentNode.prev
print("null")