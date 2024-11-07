n,s = map(int,input().split())
l = list(map(int,input().split()))

l.sort()
i = 0
cnt = 0
while l[i]<s:
  s-=l[i]
  i+=1
  cnt+=1
print(cnt)
