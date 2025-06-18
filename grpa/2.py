def DishPrepareOrder(order_list):
     dic={}
     for u in order_list:
          dic.setdefault(u,0)
          dic[u]+=1
     lst1=list(dic.items())
     sort_list1=sorted(list,key=lambda x:(-x[1],x[0]))
     result=[]
     for i in sort_list1:
          result.append(i[0])
     return result

