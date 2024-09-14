n,t,k = map(int,input().split())

b = n - 1
kes = (n*t)-b

if kes <= k:
    print('1')
else:
    print('-1')
