def checker(a):
	x = y = 0
	for i in range(1,int(a**0.5)+1):
		if a % i == 0:
			if i % 2 == 0:
				x+=1
			else:
				y+=1
	
			if i != a // i:
				if (a // i) % 2 == 0:
					x+=1
				else:
					y+=1
				
	return x==y 

a = int(input())

for i in range(0,a):
	s = int(input())
	if checker(s):
		print('YES')
	else:
		print("NO")	
