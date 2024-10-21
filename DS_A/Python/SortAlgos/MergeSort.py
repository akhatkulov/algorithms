def merge(left:list,right:list) -> list:
  res = []
  
  i = j = 0
  
  while i < len(left) and j < len(right):
    if left[i] < right[j]:
      res.append(left[i])
      i+=1 
    else:
      res.append(right[j])
      j+=1 
  
  res.extend(left[i:])
  res.extend(right[j:])

  return res 


def merge_sort(l:list) -> list:
  if len(l) <= 1:
    return l 
  
  mid = len(l)//2
  left = merge_sort(l[:mid])
  right = merge_sort(l[mid:])
  
  return merge(left,right)
  
a = [1,2,7,8,-1,0]
print(merge_sort(a))
