# quees using arrays
class queue():
     def __init__(self):
         self.queue=[]
     def enqueue(self,val):
          self.queue.append(val)
     def dequeue(self):
          if self.isempty():
               return 'queue is empty'
          self.queue.pop(0)
     def isempty(self):
          return len(self.queue)==0
     def peek(self):
          if self.isempty():
               return 'queue is empty'
          return self.queue[0]
     def size(self):
          return len(self.queue)

myqueue=queue()

myqueue.enqueue(3)
myqueue.enqueue(5)
myqueue.enqueue(7)
myqueue.enqueue(8)
print(myqueue.queue)
print(myqueue.isempty())
myqueue.dequeue()
print(myqueue.queue)

