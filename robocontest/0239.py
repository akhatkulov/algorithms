import math

def find_min_height(b, a):
    h = math.ceil(2 * a / b)
    return h
b, a = map(int, input().split())
print(find_min_height(b, a))
