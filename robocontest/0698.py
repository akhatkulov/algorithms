a = int(input(),7)
b = int(input(),7)

res = a+b 

r = ''

while res>0:
  r = str(res%7)+r
  res//=7
  
print(r)
