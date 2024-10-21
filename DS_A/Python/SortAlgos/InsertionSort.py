def i_s(l:list) -> list:
  for i in range(1,len(l)):
    j = i 
    while l[j-1] > l[j] and j>0:
      l[j-1],l[j]=l[j],l[j-1]
      j-=1
  return l 

a = [1,2,7,8,-1,0]
print(i_s(a))
