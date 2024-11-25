def eratasfen(limit):
	is_p = [True] * (limit+1)
	is_p[0] = is_p[1] = False
	
	for i in range(1,int(limit**0.5)+1):
		if is_p[i]:
			for j in range(i*i,limit+1,i):
				is_p[j]=False
	
	pr = [i for i in range(2,limit+1) if is_p[i]]
	return is_p,pr
