def loader(t,a,b,mid):
	load = b*mid
	
	for i in range(t):
		if load < a:
			return False
		load += b - a
	
	return True

def bs(t,a,b):
	left,right = 0, a*t
	while left < right:
		mid = (left+right) // 2
		if loader(t,a,b,mid):
			right = mid
		else:
			left = mid + 1
	
	return left

a,b,t = map(int,input().split())

print(bs(t,a,b)-1)
