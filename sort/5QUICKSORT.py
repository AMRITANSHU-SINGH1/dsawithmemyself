import random
def partition(arr,low,high):

     pivot=arr[low]
     i=low  # i index  will tell us numbers greater than pivvot

     j=high # j index will tell us that number less than pivot element

     while(i<j):
          while(arr[i]<=pivot and i<=high):
               i+=1
          while(arr[j]>pivot and j>=low):
               j-=1
          if (i<j):
               arr[i],arr[j]=arr[j],arr[i]
     arr[low],arr[j]=arr[j],arr[low]
     return j


def qs(arr,low,high):
     #pivot=arr[low]
     if (low<high):
          crrtindex=partition(arr,low,high) # this function places the pivot element to its correct place 
          qs(arr,low,crrtindex-1)
          qs(arr,crrtindex+1,high)

def quicksort(arr):
     qs(arr,0,len(arr)-1)
     return arr

#arr=[-4,6,-32,5,72,9,1]
arr=[random.randint(-50,100),random.randint(-50,100),random.randint(-50,100),random.randint(-50,100),random.randint(-50,100),]
print(arr)
u=quicksort(arr)
print(u)