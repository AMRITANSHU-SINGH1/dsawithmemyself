class Node():
     def __init__(self,data):
          self.data=data
          self.next=None
          self.prev=None


class double_list():
     def __init__(self):
          self.head=None
          self.tail=None
     def insert_end(self,data):

          newnode=Node(data)
          # when the list is empty
          if self.head==self.tail==None:
               self.tail=newnode
               self.head=newnode
          # when the list not empty
          else:
               newnode.prev=self.tail
               self.tail.next=newnode
               self.tail=newnode
     def delete_end(self):
          # if the list is empty
          if self.tail==self.head==None:
               return
          # if the list contains only one element
          elif self.head==self.tail:
               self.head=self.tail=None
          # if the list is contains more than one element
          else:
               self.tail=self.tail.prev
               self.tail.next.prev=None
               self.tail.next=None

               
               




# class hello():
#      def __init__(self,data):
#           self.data=data

# o1=hello("amrit")
# o2=o1
# print(o1.data)
# print("o1 ka pointer is :",o1)
# print("o1 ka pointer  o2 is :",o2)
