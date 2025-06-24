#  queue using linked list
class node():
     def __init__(self,val):
          self.next=None
          self.data=val
          

class queue():
     def __init__(self):
          self.head=None
          self.tail=None
          self.len=0
     def enqueue(self,val):
          newnode=node(val)
          if self.isempty():
               self.head=newnode
               self.tail=newnode
               self.len+=1
          else:
               self.tail.next=newnode
               self.tail=newnode
               self.len+=1
     def isempty(self):
          return (self.head==self.tail==None)
     def dequeue(self):
          if (self.head==None):
               return 'queue is empty so cannot dequeue'
          else:
               temp=self.head
               self.head=self.head.next
               temp.next=None
               self.len-=1
               return temp.data
     def peek(self):
          if self.isempty():
               return 'the queue is empty'
          else:
               return self.head.data
     def size(self):
          len=0
          #return self.len
          if self.isempty():
               return 'queue is empty'
          else:
               temp=self.head
               
               while(temp!=None):
                    temp=temp.next
                    len+=1
          return len
     def printqueue(self):
          temp=self.head
          if self.isempty():
               return 'queue is empty'
          else:
               while(temp!=None):
                    print(temp.data,)
                    temp=temp.next


q=queue()
print(f"queue is empty:{q.isempty()}")
print('now adding the elements to the queue')
q.enqueue(3)
q.enqueue(2)
q.enqueue(30)
q.enqueue(23)
q.printqueue()
print(f'the size of the queue is {q.size()}')
print(f'the peek element off the queue is : {q.peek()}')
print('now removing the element from the queue')
q.dequeue()
q.printqueue()

print(f'the peek element off the queue is : {q.peek()}')