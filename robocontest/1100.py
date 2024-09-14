def count_trailing_zeros(n, m):
    def count_factors_of_5(x):
        count = 0
        while x % 5 == 0 and x > 0:
            count += 1
            x //= 5
        return count

    def count_trailing_zeros_in_range(n, m):
        total_zeros = 0
        for i in range(n, m + 1):
            total_zeros += count_factors_of_5(i)
        return total_zeros

    return count_trailing_zeros_in_range(n, m)

a,b = map(int,input().split())

print(count_trailing_zeros(a,b))
