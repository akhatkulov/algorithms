a,b = map(int,input().split())

l = []
for i in range(max(a,b)+1):
  for j in range(max(a,b)+1):
    if i+j==a and i*j==b:
      l.append([i,j])

if l:
  for i in range(0,len(l)):
    print(*l[i])
else:
  print(-1)
