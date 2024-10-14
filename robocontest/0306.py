def bs(l,target):
	l.sort()
	left,right = 0,len(l)
	while left < right:
		mid = (left+right)//2
	
		if l[mid] <= target:
			left = mid+ 1
		else:
			right = mid
	
	return left
	
a = int(input()) #odamlar
l = list(map(int,input().split())) #odamlarning immunitetti
m = int(input()) # viruslar soni
v = [int(input()) for i in range(m)] #viruslar

for i in range(m):
	print(bs(l,v[i]))
