x = int(input())
l = list(map(int, input().split()))

baza = [1] * (x + 1)

for i in range(x):
    for j in range(i):
        if l[i] > l[j]:  # l[i] l[j] dan katta bo‘lsa
            baza[i] = max(baza[i], baza[j] + 1)

print(max(baza))
