import math

a,b = map(int,input().split())
normal = (a+b)/2
normal2 = math.sqrt(a*b)

if normal == normal2:
  print("=")
elif normal > normal2:
  print(">")
else:
  print("<")
