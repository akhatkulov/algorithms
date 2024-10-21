def bs(l:list) -> list:
  for i in range(len(l)):
    for j in range(0,len(l)-i-1):
      if l[j]>l[j+1]:
        l[j],l[j+1]=l[j+1],l[j]
  
  return l 

a = [1,2,7,8,-1,0]
print(bs(a))
