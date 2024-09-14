a = int(input())
b = list(map(int,input().split()))

s = sorted(b)

if(b==s):
  print("YES")
else:
  print("NO")
