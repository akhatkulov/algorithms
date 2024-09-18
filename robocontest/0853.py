a = input()
x = int(input())
s,m = a.split(":")
s,m=int(s),int(m)
res = (s*60)+m+x 

print(str((res//60)%24).zfill(2),":",str((res%60)).zfill(2),sep="")
