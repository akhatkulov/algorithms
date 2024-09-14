from math import gcd

def lcm(x, y):
    return x * y // gcd(x, y)

def EKUK(a, b, c):
    lcm_ab = lcm(a, b)
    res = lcm(lcm_ab, c)
    lcm_abc = lcm(lcm(a, b), c)
    if res > lcm_abc:
        return '>'
    elif res < lcm_abc:
        return '<'
    else:
        return '='

a,b,c = map(int,input().split())
print(EKUK(a, b, c))
