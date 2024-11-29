a = input()
j = t = 0

for i in range(0,len(a)):
	if int(a[i])%2==0: j+=int(a[i])
	else: t+=int(a[i])

if int(a) % 2 == 0:
	print(j)
else:
	print(t)
