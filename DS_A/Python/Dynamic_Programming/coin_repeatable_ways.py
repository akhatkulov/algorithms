mod = 1000000007 # masalada 10ning 9 darajasi + 7 ga qoldiqli bo'l degan

n,x = map(int,input().split()) ## n tangalar soni, x bu qiymat
l = list(map(int,input().split())) #tangalar

baza = [0]*(x+1) #baza yaratish
baza[0] = 1 #bazani sozlash

for i in range(1,x+1): # 1dan qiymatgacha yuramiz
  for j in l: # tangalarni birma bir olamiz
    if(i-j>=0): #manfiy qiymat emasligini tekshiramiz
      baza[i]=(baza[i]+baza[i-j])%mod  # qoldiq bo'lib har usulni qo'shib ketaveramiz

print(baza[x]) # qiymat usullarini chiqaramiz
