def checker(target:int,l:int , i:int , cnt=1) -> str:
  # print(i," --> ",l[i-1])
  if target == l[i-1]:
    return "Yes"

  if cnt==len(l)//2:
    return "No"
  
  return checker(target=target,l=l,i=l[i-1],cnt=cnt+1)
  

n, k = map(int, input().split())
l = [int(input()) for _ in range(n)]
print(checker(target=k,l=l,i=k))
