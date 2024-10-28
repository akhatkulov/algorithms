a = int(input())

baza = [-1]*(a+1)

def f(a:int) -> int:
  if a == 0: return 1 
  if a == 1: return 1 
  
  if baza[a] != -1: return a
  
  return f(a-1) + f(a-2)

print(f(a-1))
  
