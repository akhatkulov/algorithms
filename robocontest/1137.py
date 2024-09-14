def find_ages(N, K):
    x = K * N // (K - 1)
    
    if K * N % (K - 1) == 0:
        y = x - N
        return x, y

a,b = map(int,input().split())


ali_yosh, vali_yosh = find_ages(a, b)
print(ali_yosh, vali_yosh)
