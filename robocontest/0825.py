s = input()
h =""
a = {"й":"q", "ц" : "w", "у":"e" , "к":"r", "е":"t", "н":"y","г":"u", "ш":"i", "щ":"o", "з":"p", "ф":"a", "ы":"s", "в":"d", "а":"f", "п":"g", "р":"h", "о":"j", "л":"k", "д":"l","я":"z", "ч":"x", "с":"c", "м" :"v", "и":"b",  "т":"n",  "ь":"m"," " : " " , "э" : "'" }
for d in s:
    if d.isupper():
        d=d.lower()
        h+=str((a[d])).upper()
    else:
        h+=a[d]
print(h)
