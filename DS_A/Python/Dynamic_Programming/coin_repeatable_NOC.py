# NOC -- Number of Coins (Minimal Tangalar Soni)

n,x = map(int,input().split()) #n tangalar soni, x hosil qilishimiz kerak bo'lgan qiymat'
tangalar = list(map(int,input().split()))

baza = [float('inf')]*(x+1) #baza yaratyapmiz
baza[0] = 0 # bazani sozlayapmiz

for c in tangalar: # c bu yerda 1-darjasi qism tanga
	for q in range(c,x+1): #q bu yerda 2-darajasli qism tanga biz 1-darajali tangadan hosil qilishimiz kerak bo'lgan tangaga qarab boramiz
		baza[q]=min(baza[q],baza[q-c]+1) # tavsiya etamiz hozirgi qiymat minimalmi yoki biz taklif qilgan tanga minimalmi? +1 bu qo'shilyotgan tanga soni baza[x-c] esa shu yacheykadagi tanga soni
	
	
if baza[x] == float('inf'):
	print(-1)
else:
	print(baza[x])
