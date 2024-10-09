  
res = 0

def is_true(a:int):
	return 1<=a and a<=8


def checker(cnt,a,b,c,d):
  if not is_true(a) or not is_true(b):
  	return
  
  global res
  if cnt == 3:
    return res 
  
  
  
  if (a==c) and (b==d):
    res=cnt
    return cnt
    
  
  checker(cnt+1,a+1,b+2,c,d)
  checker(cnt+1,a+1,b-2,c,d)    
  checker(cnt+1,a-1,b+2,c,d)
  checker(cnt+1,a-1,b-2,c,d)
  checker(cnt+1,a+2,b-1,c,d)
  checker(cnt+1,a+2,b+1,c,d)
  checker(cnt+1,a-2,b+1,c,d)
  checker(cnt+1,a-2,b-1,c,d)
  
  
    
a,b = map(str,input().split())
x = ord(a[0])-ord('a')+1
y = a[1]
z = ord(b[0])-ord('a')+1
g = b[1]

if x==z and y == g:
  print(2)
  exit()


checker(0,int(x),int(y),int(z),int(g))



if res == 0:
  print("NO")
else:
  print(res)
