
a = int(input())
com = []

def qavs(qiymat: str, x: int, y: int) -> None:
    if len(qiymat) == a * 2:
        com.append(qiymat)
        return

    if y < x:
        qavs(qiymat + ")", x, y + 1)
    
    if x < a:
        qavs(qiymat + "(", x + 1, y)
    
qavs("", 0, 0)

for i in com:
  print(i)
