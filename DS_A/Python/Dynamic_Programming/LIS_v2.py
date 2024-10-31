def calc(arr):
    import bisect
    
    # Bu ro'yxat eng uzun oshib boradigan subtizimlarning oxirgi elementlarini saqlaydi
    lis = []
    
    for num in arr:
        # Hozirgi elementni joylashtirish uchun qidirish nuqtasini topamiz
        pos = bisect.bisect_left(lis, num)
        
        # Agar pos ro'yxat uzunligiga teng bo'lsa, demak, num lis'dagi har qanday elementdan kattaroq
        if pos == len(lis):
            lis.append(num)  # Biz oshib boradigan subtizimni kengaytiramiz
        else:
            lis[pos] = num  # Biz mavjud elementni yangilaymiz, bu eng kichik oxirgi elementni saqlashga yordam beradi
        
    return len(lis)

# Kirish ma'lumotlarini olish
n = int(input())
arr = list(map(int, input().split()))

# Eng uzun oshib boradigan subtizimning uzunligini olish
result = calc(arr)

# Natijani chiqarish
print(result)
