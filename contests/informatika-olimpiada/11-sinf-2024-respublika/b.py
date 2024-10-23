n = int(input())
l = list(map(int,input().split()))

l.sort()
t_t = 0
cnt = 0
pt = 0
for i in l:
	if t_t + i <=300:
		t_t+=i
		cnt+=1
		pt+=t_t
	else:
		break

print(cnt,pt)
