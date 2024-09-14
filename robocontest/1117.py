a,b,c =  map(int,input().split())
m = b - a
n = c - b
if n>m:
  print(n-1)
else:
  print(m-1)
