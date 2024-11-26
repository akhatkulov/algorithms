a, b = map(int, input().split())

def calc(index):
    n = 1
    while index > n:
        index -= n
        n += 1
    return n


res = 0
for i in range(a, b + 1):
    res += calc(i)

print(res)
