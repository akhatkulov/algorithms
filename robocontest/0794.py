a , b = map(int,input().split())
def hisobla(vazn,boy):
    return (10000 * vazn)/(boy**2)
Vazn = hisobla(a,b)
if Vazn<16:
  print("Yuqori vazn yetishmasligi")
elif 16<= Vazn and Vazn<18.5:
  print("Vazn yetishmasligi")
elif 18.5<=Vazn and Vazn <= 25:
  print('Ideal vazn')
elif 25 < Vazn and Vazn <=30:
  print('Ortiqcha vazn')
elif 30< Vazn and Vazn <=35:
  print('Semizlikning I darajasi')
elif 35< Vazn and Vazn <=40:
  print('Semizlikning II darajasi')
else:
  print('Semizlikning III darajasi')
