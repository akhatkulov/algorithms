class Node:
	def __init__(self,x):
		self.value = x
		self.right = None
		self.left = None 

def pre_dfs(root):
	if root:
		print(root.value,end=" ")
		pre_dfs(root.left)
		pre_dfs(root.right)

def in_dfs(root):
	if root:
		in_dfs(root.left)
		print(root.value,end=" ")
		in_dfs(root.right)

def post_dfs(root):
	if root:
		post_dfs(root.left)
		post_dfs(root.right)
		print(root.value,end=" ")

x = Node(3)
x.left = Node(4)
x.right = Node(5)
x.left.left = Node(1)

pre_dfs(x)
print()
in_dfs(x)
print()
post_dfs(x)	
