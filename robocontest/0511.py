a = input()

if a[0]=="-" and len(a)>2:
  x = a[:2]
  y = a[2:]
  #print(x,y)
  print(eval(f"{x}+{y}"))
else:
  print(a)
