import numpy as np 
arr1=np.array([7, 12, 9, 4, 11])
print(arr1)

minval=arr1[0]
for i in arr1:
     if i<minval:
          minval=i
print(minval)