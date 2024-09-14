a , b ,c = map(int,input().split())
if a%2==0 and b%2==0 and c%2==0:
  print(a//2+b//2+c//2)
else:
  print(a//2+b//2+c//2+a%2+b%2+c%2)
