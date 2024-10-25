def is_antiqa_son(n):
    rever = str(n)[::-1]
    rever = rever.replace('6','a')
    rever = rever.replace('9','b')
    
    rever = rever.replace('a','9')
    rever = rever.replace('b','6')
    if str(n) == rever:
        return True
    else:
        return False

son = str(input())

if '7' in son or '2' in son or '5'  in son or '3' in son or '4' in son :
    print('NO')
elif is_antiqa_son(son):
    print("YES")
else:
    print("NO")
