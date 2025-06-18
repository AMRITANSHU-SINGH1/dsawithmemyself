import random
#arr = [5, 3, 4, 3, 5]
#arr = [50, 40, 30, 20, 10]
arr=[random.randint(0,101),random.randint(0,101),random.randint(0,101),random.randint(0,101),random.randint(0,101)]
print(arr)
l=len(arr)
# outter loop
for i in range(1,l):
     index=i
     u=i-1
     while u>=0:
     #for u in range(i-1,0,-1):
          if arr[u]>arr[i]:
               index=u
          u=u-1
     #if arr[i]<arr[0]:
          #index=0
     minvalue=arr[i]
     arr.insert(index,minvalue)
     del arr[i+1]

print(arr)