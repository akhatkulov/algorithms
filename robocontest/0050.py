a = int(input())
res = ""
for i in range(0,a):
  x,y=map(int,input().split())
  x+=1
  if (x*(x-1))//2 == y:
    res+="1"
  else:
    res+="0"
print(res)
