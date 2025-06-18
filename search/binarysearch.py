def binarysear(arr,key):
     left=0
     right=len(arr)-1
     
     while(left<=right):
          mid=(right+left)//2
          if arr[mid]==key:
               return mid
               break
          if arr[mid]<key:
               left=mid+1
          elif arr[mid]>key:
               right=mid-1
     return -1
          
#the main function starts from here 
key=32
myarr=[5,7,9,11,32,53,56]
u=binarysear(myarr,key)
if (u!=-1):
     print(f"the element is present in the arr at index {u}")
elif (u==-1):
     print("the element is not present in the array")