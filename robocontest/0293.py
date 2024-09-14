a = str(input())
a_bytes = bytes(a, "ascii")
res = ' '.join(["{0:b}".format(x) for x in a_bytes])
res = list(res.split(' '))
uzun = len(a)
print(uzun)
for i in range(0,uzun):
    print(res[i])
