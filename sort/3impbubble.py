import numpy as np
arr=np.array([7,3,9,12,11])

n=len(arr)
count=0
for i in range(n-1):
     swapped=False
     
     for j in range(n-i-1):
          if arr[j]>arr[j+1]:
               arr[j],arr[j+1]=arr[j+1],arr[j]
               swapped=True
               print(arr)
     if not swapped:
          break
     else:
          count+=1


print(f"the sorted array is {arr}")
print(f"number of times outer loop runed:{count}")