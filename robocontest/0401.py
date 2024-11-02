def calc(s:str) -> str:
	dump = ""
	r = []
	for i in range(len(s)):
		if s[i].isdigit():
			dump*=int(s[i])
			r.append(dump)
			dump = ""
		else:
			dump+=s[i]
			
	return "".join(r)

a = input()
i = int(input())
print(calc(a)[i-1])
