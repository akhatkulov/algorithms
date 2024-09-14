def to_string(n,base):
 conver_tString = "0123456789ABCDEF"
 if n < base:
    return conver_tString[n]
 else:
    return to_string(n//base,base) + conver_tString[n % base]
 
a,b = map(int,input().split()) 
print(to_string(a,b))
