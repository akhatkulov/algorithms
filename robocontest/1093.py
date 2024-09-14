a=int(input())
b=int(input())
if (a+b)%24==0:
  print(0)
elif a+b>24:
  print((a+b)%24)
else:
  print(a+b)
