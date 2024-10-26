def time_calc(t:str,r:int)->str:
	s,m = map(int,t.split(":"))
	res = (s*60)+ m + r
	s = (res//60) %24
	m = res%60
	
	return f"{str(s).zfill(2)}:{str(m).zfill(2)}"

baza = {
    "Andijon": -12, "Angren": -3, "Farg'ona": -10, "Namangan": -9,
    "Buxoro": 20, "Jizzax": 7, "Navoiy": 17, "Qashqadaryo": 14,
    "Samarqand": 10, "Sirdaryo": 3, "Surxondaryo": 11, "Xorazm": 35,
    "Qoraqalpog'iston": 36, "Toshkent": 0
}

x = input()
t = input()
y = input()

print(time_calc(t,baza[y]-baza[x]))
