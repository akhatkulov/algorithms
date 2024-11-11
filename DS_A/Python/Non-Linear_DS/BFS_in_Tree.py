from collections import deque

class Node:
	def __init__(self,x):
		self.value = x 
		self.right = None
		self.left = None 

def bfs(root):
	if not root: return 
	
	q = deque([root])
	
	while q:
		n = q.popleft()
		
		print(n.value)
		
		if n.left: q.append(n.left)
		if n.right: q.append(n.right)

x = Node(3)
x.left = Node(4)
x.right = Node(5)
x.left.left = Node(1)

bfs(x)
