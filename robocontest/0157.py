def calcer(n, arr):
    arr.sort()  
    mcnt = 0
    
    for i in range(n):
        cnt = arr.count(arr[i]) + arr.count(arr[i] + 1)
        mcnt = max(mcnt, cnt)
    
    return mcnt

n = int(input())
l = list(map(int,input().split()))

print(calcer(n,l))
