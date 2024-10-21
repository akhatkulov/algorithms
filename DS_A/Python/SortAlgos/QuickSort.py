def q_s(l:list)-> list:
  if len(l) <= 1:
    return l
  
  mid = l[len(l)//2] 
  
  left = [i for i in l if i < mid]
  right = [i for i in l if i > mid]
  middle = [i for i in l if i == mid]
  
  return q_s(left) + middle + q_s(right)


a = [1,2,7,8,-1,0]
print(q_s(a))
