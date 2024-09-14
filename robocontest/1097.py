def max_money_from_check(N):
    N_str = str(N)
    max_value = N 
    for i in range(len(N_str)):
        original_digit = N_str[i]
        for new_digit in '0123456789':
            if new_digit != original_digit:
                new_number = N_str[:i] + new_digit + N_str[i+1:]
                if new_number[0] != '0':  
                    max_value = max(max_value, int(new_number))

    return max_value

N = int(input().strip())
print(max_money_from_check(N))
