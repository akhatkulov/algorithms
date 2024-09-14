def count_digits(n):
    total_digits = 0
    length = 1
    current = 1
    
    while current <= n:
        next_threshold = current * 10 - 1
        if next_threshold > n:
            next_threshold = n
            
        total_digits += (next_threshold - current + 1) * length
        current *= 10
        length += 1
    
    return total_digits


n = int(input().strip())
print(count_digits(n))
