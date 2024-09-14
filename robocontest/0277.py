def checker(l):
  r = 0
  for i in l:
    if i <= 0:
      r+=1
  
  return r

x = int(input())
for i in range(0,x):
  a,b = map(int,input().split())
  l = list(map(int,input().split()))
  res = checker(l)
  if res >= b:
    print("Qizg'in")
  else:
    print("Zerikarli")
