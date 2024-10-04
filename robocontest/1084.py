def solve():
    n = int(input())  # Maxbuslar soni
    boxes = [0] + [int(input()) for _ in range(n)]  # Qutilardagi raqamlar (1 dan boshlangan raqamlar)
    
    # Qutilar tekshirilganini belgilash uchun array
    visited = [False] * (n + 1)
    
    def check_cycle_length(start):
        count = 0
        current = start
        while not visited[current]:
            visited[current] = True
            current = boxes[current]
            count += 1
            if count > n // 2:  # Agar tsikl uzunligi n/2 dan oshsa, yutqaziladi
                return False
        return True

    for i in range(1, n + 1):
        if not visited[i]:
            if not check_cycle_length(i):
                print("No")
                return
    
    print("Yes")

solve()
