#arr=[324,36,3,35.60,8,0]
def mergesort(arr):
     if len(arr)<=1:
          return arr
     mid=len(arr)//2

     right_part=arr[mid:]
     left_part=arr[:mid]

     sort_left=mergesort(left_part)
     sort_right=mergesort(right_part)

     return merge(sort_left,sort_right)

def merge(left,right):
     result=[]
     i=j=0
     while i<len(left) and j<len(right):
          if(left[i])<right[j]:
               result.append(left[i])
               i+=1
          else:
               result.append(right[j])
               j+=1
     result.extend(left[i:])
     result.extend(right[j:])

     return result
unsorted_arr=[85,35,8,2,8,1,5,2,9]
sorted_arr=mergesort(unsorted_arr)
print("sorted array:",sorted_arr)


