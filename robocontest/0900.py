t = int(input())

for _ in range(t):
    k, q, n = map(int, input().split())
    left = q  
    for _ in range(n):
        left = 2 * (left + k)

    print(left)
