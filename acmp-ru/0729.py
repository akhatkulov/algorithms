s = int(input())
l = list(map(int,input().split()))

gr = [(i//2)+1 for i in l]

half = (s//2)+1 

gr.sort()

print(sum(gr[:half]))
