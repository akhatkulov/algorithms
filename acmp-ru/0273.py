def checker(s, idx, cnt, n):
    if len(cnt) == 3:
        if cnt[0] != '0':
            n.add(''.join(cnt))
        return

    if idx >= len(s):
        return

    checker(s, idx + 1, cnt + [s[idx]], n)

    checker(s, idx + 1, cnt, n)

s = input()
n = set()

if len(s) >= 3:
    checker(s, 0, [], n)

print(len(n))
