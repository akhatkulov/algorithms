def ivm(s, e):
    d = abs(s[0] - e[0])
    f = abs(s[1] - e[1])
    return (d == 2 and f == 1) or (d == 1 and f == 2)

def pp(p):
    return ((p - 1) // 8, (p - 1) % 8)

def ckt(b):
    pos = {}

    for i in range(8):
        for j in range(8):
            n = b[i][j]
            if n in pos:
                return "No", f"Duplicate position {n}"
            pos[n] = (i, j)

    if set(pos.keys()) != set(range(1, 65)):
        return "No", "Not all positions covered"

    for i in range(1, 64):
        srt = pos[i]
        ed = pos[i + 1]
        if not ivm(srt, ed):
            sp = f"{chr(srt[1] + ord('a'))}{8 - srt[0]}"
            ep = f"{chr(ed[1] + ord('a'))}{8 - ed[0]}"
            return "No", f"{sp} {ep}"

    return "Yes", None

if __name__ == "__main__":
    import sys
    inp = sys.stdin.read

    dta = inp().strip().split("\n")
    b = [list(map(int, row.split())) for row in dta]

    res, err = ckt(b)
    print(res)
    if err:
        print(err)
