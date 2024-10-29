n,x = map(int,input().split()) # n tovarlar soni, x kerakli og'irlik 
l_p = list(map(int,input().split())) # n ta tovar narxi
l_w = list(map(int,input().split())) # n ta tovar og'irligi

baza = [0]*(x+1) #baza shakllantirish

for i in range(0,n):
	pul = l_p[i] #i-tovar narxi
	to = l_w[i] #i-tovar og'irligi 
	
	for j in range(x,pul-1,-1): # takrorlanmaslik uchun pul-1 dan Xqiymatgacha boramiz
		baza[j]=max(baza[j],baza[j-pul]+to) #taklif qilamiz

print(baza[x])
