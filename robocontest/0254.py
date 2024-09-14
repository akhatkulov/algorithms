def shifrlash(s):
    n = len(s)
    s_list = list(s)
    for i in range(0, n - 1, 2):
        s_list[i], s_list[i + 1] = s_list[i + 1], s_list[i]
    shift = str.maketrans(
        'abcdefghijklmnopqrstuvwxyz',
        'zyxwvutsrqponmlkjihgfedcba'
    )
    shifted_s = ''.join(s_list).translate(shift)
    return shifted_s


input_string = input()

print(shifrlash(input_string))
