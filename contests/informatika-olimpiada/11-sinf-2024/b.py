# link: https://robocontest.uz/olympiads/1019/tasks/B
a = int(input())

lx = {}
for i in range(a):
  x,y = map(int,input().split())
  lx[i]=x,y  

res = []

for i in range(a):
  for j in range(a):
    if j!=i:
      res.append(abs(lx[i][0]-lx[j][0])+abs(lx[i][1]-lx[j][1]))

print(min(res),max(res))
