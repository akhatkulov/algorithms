a=input()

x = 0
for i in range(0,len(a)):
    x+=int(a[i])

a=x 

if a%3==0: print("Yes")
else: print("No")
