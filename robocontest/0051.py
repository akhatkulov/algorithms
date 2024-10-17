def bt(n):
    c = 0
    while n > 0:
        c += 1
        n -= n & -n  
    return c

t = int(input())
res = []
for _ in range(t):
    n = int(input())
    res.append(bt(n))

for r in res:
    print(r)
