n = int(input())
if n==1:
    print(n)
elif n==2:
    print(n)
else:
    r = ((n**3)-(3*n**2)+(2*n))%1000000007
    print(r)
