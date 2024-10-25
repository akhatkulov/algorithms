k, j, x = map(str,input().split())
a=int(k)
b=int(j)
if x == '+':
    print(a-1,b+1)
elif x == '-':
    print(a+1,b+1)
elif x == '*':
    print(1,a*b)
elif x == '/':
    print(a*2,b*2)
