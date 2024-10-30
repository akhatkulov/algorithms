w_1 = input()
w_2 = input()

n = len(w_1)  # w_1 so'z uzunligi
m = len(w_2)  # w_2 so'z uzunligi

# 2. Bazani matritsa ko'rinishda yaratamiz va 0 bilan to'ldiramiz
baza = [
    [0] * (m + 1) for _ in range(n + 1)
]

# Matritsani sozlab olamiz x o'qi bo'yicha
for i in range(n + 1):
    baza[i][0] = i

# Matritsani sozlab olamiz y o'qi bo'yicha
for j in range(m + 1):
    baza[0][j] = j

# DP jadvalini to'ldirish
for i in range(1, n + 1):
    for j in range(1, m + 1):
        if w_1[i - 1] == w_2[j - 1]:  # w_1[i-1] va w_2[j-1] ni solishtirish
            baza[i][j] = baza[i - 1][j - 1]  # O'zgartirish kerak emas
        else:
            baza[i][j] = min(baza[i - 1][j - 1],  # O'zgartirish
                             baza[i][j - 1],      # Qo'shish
                             baza[i - 1][j]) + 1  # O'chirish

print(baza[n][m])
