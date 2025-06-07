class Node:
     def __init__(self,data):
          self.data=data
          self.next=None
node1=Node(5)
node2=Node(24)
node3=Node(45)
node4=Node(-5)

node1.next=node2
node2.next=node3
node3.next=node4
node4.next=node1

currentnode=node1
#print(currentnode)  #this will print the address of the node1
startnode=node1
print(currentnode.data,end=" -> ")
currentnode=currentnode.next
while currentnode!=startnode:
     print(currentnode.data,end=" -> ")
     currentnode=currentnode.next

print("...")
