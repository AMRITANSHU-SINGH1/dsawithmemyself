def DishPrepareOrder(order_list):
     dic={}
     for u in order_list:
          dic.setdefault(u,0)
          dic[u]+=1
     lst1=list(dic.items())
     sort_list1=sorted(lst1,key=lambda x:(-x[1],x[0]))
     result=[]
     for i in sort_list1:
          result.append(i[0])
     return result

nums = [1004, 1003, 1004, 1003, 1004, 1005, 1003, 1004, 1003, 1002, 1005, 1002, 1002, 1001, 1002, 1002, 1002]
print(DishPrepareOrder(nums)) 