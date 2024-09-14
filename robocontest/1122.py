a = input()
l = len(a)
c=0
for i in a:
    if int(i)%2!=0:
        c+=1
    else:
        continue
if l%2!=0 and l==c:
    print("YES")
else:
    print("NO")
