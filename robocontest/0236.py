a = int(input())

if a>=1:
	print(a*(a+1)//2)
else:
	a = abs(a)
	print(f"-{(a*(a+1)//2)-1}")
