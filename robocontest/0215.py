def son(k, n):
    if n == 0:
        return 1
    if n % 2 == 0:
        x = son(k, n // 2)
        return x * x
    else:
        return k * son(k, n - 1)
n=int(input())
a=son(2,2*(n%4)+1)-son(2,(n%4)+1)+1
if a%5==0:
    print("A")
else:
    print("B")
