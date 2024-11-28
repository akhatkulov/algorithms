a , b = input().split()
com = input()
l = list(map(int,a.split("X")))
b = int(b)
l = l[0] * l[1]
r = l * b 


bit = 1
bayt = bit * 8
kb = bayt * 1024
mb = kb * 1024
gb = mb * 1024
if com=="GB":
	r/=gb
elif com == "MB":
	r/=mb
elif com == "KB":
	r/=kb
elif com == "B":
	r/=bayt
elif com == "b":
	r/=bit

print(f"{r:.4f}")

