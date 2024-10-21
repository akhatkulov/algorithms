def ss(l:list) -> list:
  for i in range(0,len(l)):
    min_c = i 
    for j in range(i,len(l)):
      if l[min_c] > l[j]:
        min_c = j 
    l[i],l[min_c]=l[min_c],l[i]
  
  return l

a = [1,2,7,8,-1,0]
print(ss(a))
