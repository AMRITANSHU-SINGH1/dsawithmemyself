# selection sorting method
import random
import numpy as np
lstarr=np.array([random.randint(0,101),random.randint(0,101),random.randint(0,101),random.randint(0,101),random.randint(0,101)])

print(lstarr)
l=len(lstarr)
#print(l)
for i in range(l):
     min_index=i
     min_value=0
     for u in range(i+1,l):
          if lstarr[min_index]>lstarr[u]:
               min_index=u
     # min_value=lstarr.pop(min_index)
     # lstarr.insert(i,min_value)
     lstarr[i],lstarr[min_index]=lstarr[min_index],lstarr[i]
print(lstarr)

