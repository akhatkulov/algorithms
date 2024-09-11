#    Digital Root (Raqamning Digital Qoyilmasi)
#
#    Digital Root (raqamning digital qoyilmasi) bir sonning barcha raqamlarini qo'shib, yakuniy xonali sonni topishning qisqa usulidir.
#
#    Qanday qilib hisoblash mumkin?
#
#    Agar son n bo'lsa, uning digital root’ini topish uchun n % 9 operatsiyasini ishlatamiz. Agar n 0 bo'lsa, digital root 0 bo'ladi.
#    Matematik formula: digital root(n)=1+(n−1)%9digital root(n)=1+(n−1)%9, bu formula n > 0 bo'lsa ishlaydi.
#

def digital_root(n):
    if n == 0:
        return 0
    else:
        return 1+(n-1) % 9

def solve():
    import sys
    input = sys.stdin.read
    data = input().split()
    
    T = int(data[0])
    results = []
    
    for i in range(1, T + 1):
        n = int(data[i])
        results.append(digital_root(n))
    
    for result in results:
        print(result)

solve()
