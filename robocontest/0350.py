a = int(input())
x,y = map(float,input().split())

if (x*10)%5==0 and (y*10)%5==0 and a==x+y:
  print("YES")
else:
  print("NO")
