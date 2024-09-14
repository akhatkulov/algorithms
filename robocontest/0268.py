m1,m2,s1= map(int,input().split())

l1 = abs(s1-m2)
l2 = abs(s1-m1)

if l1<l2:
  print('2-mushuk')
elif l1>l2:
    print('1-mushuk')
else:
  print('sichqon')
