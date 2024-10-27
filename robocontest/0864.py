def ff(n):
  
  dp = gg(n, n)
  return dp
  
def gg(n, k):
  
  if n == 0: return [""]
  if n == 1: return ["1", "0", "8"]
  
  m = gg(n - 2, k)
  dp = []
  
  for i in m:
    if n != k:   
      dp.append("0" + i + "0")

    dp.append("8" + i + "8")
    dp.append("1" + i + "1")
    dp.append("9" + i + "6")
    dp.append("6" + i + "9")
  return dp

arr = []
i = 1
while True:
  arr += ff(i)
  if len(arr) > 100001:
    break
  i += 1
arr = [int(x) for x in arr]
arr.sort()
print(arr[int(input())-1])
