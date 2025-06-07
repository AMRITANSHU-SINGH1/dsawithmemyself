class Node:
     def __init__(self,data):
          self.data=data
          self.next=None
# class Node:
#      def __init__(self,data,next):
#           self.data=data
#           self.next=next


node1=Node(-3)
node2=Node(233)
node3=Node(73)
node4=Node(33)



node1.next=node2
node2.next=node3
node3.next=node4

print(node1.next)
print(node2)
# y=node1
# print(y)
# print("the address of node 1 is ") # this will print the adress of the node 1
# print (node1)
# print("\n")

# print ("the address of node 2 is ")
# print(node1.next) # this will print the address of the node 2
# print("\n")
# print(node2)


currentnode=node1
while currentnode:
     print(currentnode.data,end="->")
     currentnode=currentnode.next
print("null")