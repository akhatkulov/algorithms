a,b = map(int,input().split())
l = list(map(int,input().split()))

res_list = []
res = 0
for i in range(0,a):
  if l[i]==b:
    res+=l[i]
    res_list.append(i+1)

print(res)
print(*res_list)
