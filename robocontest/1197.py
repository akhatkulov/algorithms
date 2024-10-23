a = int(input())

if a%2==0:
	a//=2
	b = a
else:
	a//=2
	b = a+1

print(a*b)
