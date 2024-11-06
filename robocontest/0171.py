a = map(int,input().split())
l = list(map(int,input().split()))

r = 0

for i in l:
	if i>0:
		r+=i 
	elif i<0:
		r+=i 
	
print(abs(r))
