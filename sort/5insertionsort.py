import random
# #arr = [5, 3, 4, 3, 5]
# #arr = [50, 40, 30, 20, 10]
# arr=[random.randint(0,101),random.randint(0,101),random.randint(0,101),random.randint(0,101),random.randint(0,101)]
# print(arr)
# l=len(arr)
# # outter loop
# for i in range(1,l):
#      index=i
#      u=i-1
    
#      while u>=0:
#      #for u in range(i-1,0,-1):
#           if arr[u]>arr[i]:
#                index=u
#           u=u-1
#      #if arr[i]<arr[0]:
#           #index=0
#      minvalue=arr.pop(i)
#      arr.insert(index,minvalue)


#print(arr)
# import random
# #ACTUAL LOGI
arr=[random.randint(0,101),random.randint(0,101),random.randint(0,101),random.randint(0,101),random.randint(0,101)]
print(arr)
l=len(arr)
# for i in range(1,l):
#      iterindex=i
#      currentvalue=arr.pop(i)
#      for u in range(i-1,-1,-1):
#           if arr[u]>currentvalue:
#                iterindex=u
#      arr.insert(iterindex,currentvalue)

#print(arr)
for i in range(1,l):
     insert_index=i
     currelement=arr[i]
     for j in range(i-1,-1,-1):
          if arr[j]>currelement:
               arr[j+1]=arr[j]
               insert_index=j
          else:
               break
     arr[insert_index]=currelement

print(arr)