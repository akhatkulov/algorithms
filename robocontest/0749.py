l1 = list(map(int,input().split()))
l2 = input()

l3 = sorted(l2)
l1.sort()

res = {}
for i in range(3):
	res[l3[i]] = l1[i]


x = ""
for i in range(3):
	x+= str(res[l2[i]]) + " "

print(x)
