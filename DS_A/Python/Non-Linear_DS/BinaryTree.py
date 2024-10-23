class Node:
    def __init__(self, key, content=None):
        self.left = None
        self.right = None
        self.value = key
        self.content = content

    def __repr__(self): 
        return f"Node({self.value})\nContent:{self.content}"

class BinaryTree:
    def __init__(self):
        self.root = None

    def insert(self, key, content=None):
        if self.root is None:
            self.root = Node(key, content)
        else:
            self._insert(self.root, key,content)

    def _insert(self, cur_node, key,content=None):
        if key < cur_node.value:
            if cur_node.left is None:
                cur_node.left = Node(key,content)
            else:
                self._insert(cur_node.left, key,content)
        else:
            if cur_node.right is None:
                cur_node.right = Node(key,content)
            else:
                self._insert(cur_node.right, key,content)

    def inorder_traversal(self, node):
        if node.left:
            self.inorder_traversal(node.left)
        print(node.value)
        if node.right:
            self.inorder_traversal(node.right)

    def preorder_traversal(self, node):
        print(node.value)
        if node.left:
            self.preorder_traversal(node.left)
        if node.right:
            self.preorder_traversal(node.right)

    def postorder_traversal(self, node):
        if node.left:
            self.postorder_traversal(node.left)
        if node.right:
            self.postorder_traversal(node.right)
        print(node.value)  
    
    def find(self, node, target):
        if target < node.value:
            if node.left is None:
                return False
            else:
                return self.find(node.left, target)
        elif target > node.value:
            if node.right is None:
                return False
            else:
                return self.find(node.right, target)
        else:
            return True

x = BinaryTree()

x.insert(3, "hello")
x.insert(10,[1,2,3])
x.insert(6)
x.insert(9)
x.insert(4)

print(x.root.right)  # o'ng tarmoq

print("Ordered:")  # tartiblangan
x.inorder_traversal(x.root)
print("----")
print("PreOrdered:")  # tartiblanmagan
x.preorder_traversal(x.root)
print("----")
print("PostOrdered:")  # tartiblanmagan lekin teskari
x.postorder_traversal(x.root)
print("----")
print("Search 6 and 7 in BT")
print(x.find(x.root, 6))  # Bor
print(x.find(x.root, 7))  # Yo'q
