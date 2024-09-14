x1,v1,x2,v2= map(int,input().split())


k1 = x1
k2 = x2
k = 1
for i in range(1,100000):
  k1+=v1
  k2+=v2
  if k1==k2:
    k-=1
    break
  else:
    pass
if k==1:
    print("NO")
else:
    print("YES")
