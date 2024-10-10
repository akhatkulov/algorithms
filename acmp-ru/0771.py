res = {}

def checker(x,y):
	global res 
	if(x==0):
		return 1
	if x < 0 or y <= 0:
		return 0
	
	if (x,y) in res:
		return res[(x,y)]
	
	t = 0 
	for i in range(1,y+1):
		t+=checker(x-i,i-1)
	
	res[(x,y)] = t
	return t 
	
n = int(input())

print(checker(n,n))
