def factorization(n:int)->list:
	l = []
	
	while(n%2==0):
		l.append(2)
		n//=2
	
	for i in range(3,int(n**0.5)+1,2):
		while (n%i==0):
			l.append(i)
			n//=i
	
	if n > 2:
		l.append(n)
	
	return l

a = int(input())
res = factorization(a)
print("*".join(map(str,res)))
