'''Frequency of elements

Given a list of integers sorted in ascending order, find the number of occurrences for a given element in the list. The worst case running time of your program should be 

Write a function countOccurrence(AList, size, key) which returns the frequency of key in AList. If the element is not present in the list, your function should return 0.

Example

If the input list AList is : [3,3,4,4,4,5,6,6,9,9,9,9,9,10,10] and the key is 6, your program should return 2.

Note:- Do not use slicing in solution code for the list because it is O(n) operation.
'''
#attempt one 
# def countOccurrence(AList,size,key):
#     idx=0
#     num=0
#     for u in AList:
#         if u==key:
#             while(key==AList[idx] and (idx<len(AList)-1)):
#                 num+=1
#                 idx+=1
                
        
#         idx+=1
#     if num==0:
#         return 0
#     else:
#         return num


# solution by deepseek method
def countoccurence(arr,size,key): #using binary search algorithkum
     def find_first(arr,key):
          left=0
          right=len(arr)-1
          mid=0
          first=-1 # we have to initialize the first as -1 because fisrt=0 has 
          #two meaning 
          '''
          first meaning is that we find the the first occurance of key at index 0 which may break 
          the code in later stage(see line 692 )
          '''
          while(left<=right):
               mid=left+(right-left)//2
               if arr[mid]==key:
                    right=mid-1
                    first=mid
               elif arr[mid]>key:
                    right=mid-1
               elif arr[mid]<key:
                    left=mid+1
          return first
     def find_last(arr,key):
          left=0
          right=len(arr)-1
          mid=0
          last=0
          while(left<=right):
               mid=left+(right-left)//2
               if arr[mid]==key:
                    last=mid
                    left=mid+1
               elif arr[mid]<key: # meaning the key is in the left part of the divided array
                    left=mid+1
               elif arr[mid]>key:
                    right=mid-1
          return last
     first=find_first(arr,key)
     if first==-1:
          return 0
     last=find_last(arr,key)
     return last-first+1



