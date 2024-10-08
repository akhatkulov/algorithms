a = int(input()) #tizzalar soni 
l = list(map(int,input().split())) #tizzalarni pullari 
s = int(input()) #qizni kashalogi
l.sort() # tartiblab olamiz anavi o'ynashdan bo'lgan ko'proq pul kimda bor ekanini bilishi uchun 
for i in l:
  if i > s: #yigitni puli o'ynashdan bo'lgan anuv qini pulidan ko'pmi
    s=(s/2)+(i/2) # o'yin boshlandi
print(f"{s:.6f}") # anavi o'ynashdan bo'lganni ishlagani puli

