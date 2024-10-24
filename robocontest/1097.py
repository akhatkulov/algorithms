def calc(n:int) -> str:
    s = list(str(n))
    for i in range(len(s)):
        if s[i] != '9':
            s[i] = '9'
            break
    return ''.join(s)
n = int(input())
print(calc(n))
