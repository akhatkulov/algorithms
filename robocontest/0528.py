a = int(input())

if a==1:
  print("*")
  exit()

if a%2==0:
  print(-1)
  exit()

com = []

def romb(x, y, tepa=True) -> None:
    com.append((" " * x) + ("*" * y))

    if y == 1 and not tepa:
        return  
    if x > 0 and tepa:
        romb(x - 1, y + 2, tepa) 
    else:
        romb(x + 1, y - 2, False)
        
romb(x=a//2, y=1)

for coms in com:
    print(coms)
