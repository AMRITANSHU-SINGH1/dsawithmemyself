import numpy as np
arr=np.array([19,3,47,2,0])
#arr[0]=3
print(arr)
n=len(arr)
for i in range(n-1):
     for j in range(n-i-1):
          if arr[j]>arr[j+1]:
               arr[j],arr[j+1]=arr[j+1],arr[j]

print(f'sorted array:{arr}')