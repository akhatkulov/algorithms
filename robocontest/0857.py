a = list(map(int,input()))
a_s = sum(a)
if a[0]!=0 and a_s%2!=0 and len(a)==9:
    print("yes")
else:
    print("no")
