from collections import deque

def calc(l:list) -> int:
  x = deque(l)
  t = True
  while len(x)>1:
    if t:
      x.pop()
    else:
      x.popleft()
    
    t = not t
  
  return x[0]  

a = int(input())  
l = list(map(int,input().split()))
l.sort()
print(calc(l=l))
