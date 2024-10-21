def c_s(l:list) -> list:
  l_c = l.copy()
  max_val = max(l_c)
  
  cnt = [0]*(max_val+1)
  
  for i in l_c:
    cnt[i]+=1 
  
  l.clear()
  
  for i in range(len(cnt)):
    l.extend([i]*cnt[i])
  
  return l
  
a = [1,2,7,8,5,0]
print(c_s(a))
