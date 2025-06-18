def linears(arr,key):
     for i in range(0,len(arr)):
          if arr[i]==key:
               return i
     else:
          return -1

arr=[52,63,8,2,33,54]
print(linears(arr,-2))