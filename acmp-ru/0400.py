def main():
    lst = []
    for i in range(6):
    	a, b = map(int, input().split())
    	lst.append(a)
    	lst.append(b)
    ls = set(lst)
    kv = sum(1 for z in range(0, 11, 2) if lst[z] == lst[z + 1])
    
    lst.sort()

    if len(ls) == 1:
        print("POSSIBLE")
        return
    if len(ls) == 2 and kv == 2 and (lst[0] == lst[7] or lst[11] == lst[4]):
        print("POSSIBLE")
        return
    if (lst[0] == lst[3] and lst[4] == lst[7] and
            lst[8] == lst[11] and len(ls) == 3 and kv == 0):
        print("POSSIBLE")
        return
    
    print("IMPOSSIBLE")

if __name__ == "__main__":
    main()

""" 
Bu masala, berilgan olti taxta o'lchamlari asosida qutichani yig'ish mumkinligini tekshirishga qaratilgan. Qutichani yasash uchun, har bir taxta qutichaning bir tomoni sifatida ishlatiladi va har bir tomoni uchun ikkita bir xil taxta kerak. Keling, kodni batafsil ko'rib chiqaylik va har bir qadamni tushuntirib beray:

### Kodni tahlil qilish:

1. **Ma'lumotlarni o'qish:**
   ```python
   lst = []
   for i in range(6):
       a, b = map(int, input().split())
       lst.append(a)
       lst.append(b)
   ```
   Bu qismda, dasturdan olti taxta o'lchamlari (kenglik va balandlik) kiritiladi. Har bir taxta uchun ikkita o'lcham berilganligi sababli, o'lchamlar ro'yxatiga ikkita qiymat qo'shiladi.

2. **O'lchamlar to'plami va juftlar sonini hisoblash:**
   ```python
   ls = set(lst)
   kv = sum(1 for z in range(0, 11, 2) if lst[z] == lst[z + 1])
   ```
   - `ls` - bu o'lchamlar ro'yxatining unikal qiymatlari to'plami. Qutichani yasash uchun kerakli tomonlar sonini aniqlash uchun foydalaniladi.
   - `kv` - bu juft taxtalar sonini hisoblaydi (ya'ni, bir xil kenglik va balandlikdagi taxtalarning juftlari).

3. **Saratlar va ularning soni orqali tekshirish:**
   ```python
   lst.sort()
   ```
   Taxtalar o'lchamlari o'sish tartibida tartibga solinadi, shunda ularni tekshirish osonlashadi.

4. **Qutichani yasash shartlarini tekshirish:**
   ```python
   if len(ls) == 1:
       print("POSSIBLE")
       return
   if len(ls) == 2 and kv == 2 and (lst[0] == lst[7] or lst[11] == lst[4]):
       print("POSSIBLE")
       return
   if (lst[0] == lst[3] and lst[4] == lst[7] and
           lst[8] == lst[11] and len(ls) == 3 and kv == 0):
       print("POSSIBLE")
       return
   ```
   - Bir xil qiymatlarning barchasi teng bo'lsa (`len(ls) == 1`), bu holatda qutichani yasash mumkin, chunki bitta tomonning o'lchami bilan barchasini yasash mumkin.
   - Agar ikki xil o'lcham mavjud bo'lsa (`len(ls) == 2`), va ularning har biri uchun ikkita taxta mavjud bo'lsa (`kv == 2`), o'lchamlarning ma'lum munosabatlari qanoatlantirilsa, qutichani yasash mumkin.
   - Agar uch xil o'lcham mavjud bo'lsa (`len(ls) == 3`) va har biri uchun juft taxtalar mavjud bo'lsa, qutichani yasash mumkin.

5. **Natijani chiqarish:**
   ```python
   print("IMPOSSIBLE")
   ```
   Agar hech bir shart qanoatlantirilmasa, qutichani yasash mumkin emasligini bildiradi.

### Masala bilan bog'liqlik:
Ushbu kod, berilgan olti taxta o'lchamlari asosida ularning qutichani yasash uchun to'g'ri joylashganligini tekshiradi. Qutichani yasash uchun kerakli taxtalar juft bo'lishi va o'lchamlar orasidagi aloqalar mos kelishi kerak. Ushbu shartlarni tekshirish orqali dastur qutichani yasash mumkin yoki yo'qligini aniqlaydi.

### Xulosa:
Bu kodning asosiy maqsadi, taxtalar o'lchamlarini tekshirish va qutichani yasash uchun zarur bo'lgan shartlarni qanoatlantirishdir. Kodda o'lchamlar, ularning juftligi va unikal qiymatlari asosida mantiqiy tekshiruvlar orqali qutichani yasash mumkinligini aniqlaydi.|
"""
