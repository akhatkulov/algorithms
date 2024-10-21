def b_s(l:list):
  left,right = 0, len(l)-1 
  
  res = None 
  while left<=right:
    mid = (left+right)//2
    if l[mid]%5==0:
      res = l[mid]
      right = mid-1
    
    elif l[mid]%5<5:
      left = mid+1 
    else:
      right = mid -1 
    
  return res 

a = [1,2,7,8,5]
a.sort()

print(b_s(a))
