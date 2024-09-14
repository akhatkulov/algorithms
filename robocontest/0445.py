def m_res(n):
    r = list(map(int, str(n)))

    res = r[0]
    for rr in r[1:]:
        if res + rr > res * rr:
            res += rr
        else:
            res *= rr
    
    if res<n:
        return n
    else:
        return res

a = int(input())
m_res = m_res(a)
print(m_res)
