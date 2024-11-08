n, m = map(int, input().split())
yil = 0

while m < n // 2:
    m += 1
    n += 1
    yil += 1

if m == n // 2:
    print(yil+1)
else:
    print(-1)
