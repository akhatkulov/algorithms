t = int(input())

for _ in range(t):
    x1, y1, x2, y2 = map(int, input().split())
    x_new = x2 + (x2 - x1)
    y_new = y2 + (y2 - y1)
    print(x_new, y_new)
