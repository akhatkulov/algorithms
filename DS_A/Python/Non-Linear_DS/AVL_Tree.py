# Tugun (Node) klassi AVL daraxtdagi tugunlarni ifodalaydi
class Node:
    def __init__(self, key):
        self.key = key  # Tugunning qiymati
        self.right = None  # O'ng bolasi (yoki o'ng tomoni bo'sh)
        self.left = None   # Chap bolasi (yoki chap tomoni bo'sh)
        self.height = 1    # Tugunning balandligi (boshlanishda 1)

# AVL daraxt klassi, unda tugun qo'shish, aylantirish, va balans tekshirish funksiyalari mavjud
class AVL_Tree:
    # Tugun qo'shish funksiyasi
    def insert(self, root, key):
        # Agar ildiz tugun bo'sh bo'lsa, yangi tugun yaratiladi
        if not root:
            return Node(key)
        # Qo'shilayotgan tugun qiymati ildizdan kichik bo'lsa, chapga qo'shiladi
        elif key < root.key:
            root.left = self.insert(root.left, key)
        # Qo'shilayotgan tugun qiymati ildizdan katta bo'lsa, o'ngga qo'shiladi
        else:
            root.right = self.insert(root.right, key)
            
        # Qo'shilgan tugundan keyin balandlik yangilanadi
        root.height = 1 + max(self.get_height(root.left), self.get_height(root.right))
        
        # Tugunning balansini tekshirish
        balance = self.get_balance(root)
        
        # Muvozanatsizlik holatlari va tegishli aylantirishlar:
        # Chap-chap holat (left-left)
        if balance > 1 and key < root.left.key:
            return self.right_rotate(root)
        
        # O'ng-o'ng holat (right-right)
        if balance < -1 and key > root.right.key:
            return self.left_rotate(root)
        
        # Chap-o'ng holat (left-right)
        if balance > 1 and key > root.left.key:
            root.left = self.left_rotate(root.left)
            return self.right_rotate(root)
        
        # O'ng-chap holat (right-left)
        if balance < -1 and key < root.right.key:
            root.right = self.right_rotate(root.right)
            return self.left_rotate(root)
        
        return root  # Yangi ildiz tugunini qaytaradi
    
    # Chap aylantirish funksiyasi
    def left_rotate(self, main):
        x = main.right  # Chap aylantirishda o'ng tugun yangi ildiz bo'ladi
        y = x.left      # X o'ng tugunning chap bolasi
    
        # Aylantirishni amalga oshirish
        x.left = main
        main.right = y
        
        # Balandliklarni yangilash
        main.height = 1 + max(self.get_height(main.left), self.get_height(main.right))
        x.height = 1 + max(self.get_height(x.left), self.get_height(x.right))  
        
        return x  # Yangi ildizni qaytaradi
    
    # O'ng aylantirish funksiyasi
    def right_rotate(self, main):
        y = main.left   # O'ng aylantirishda chap tugun yangi ildiz bo'ladi
        x = y.right     # Y chap tugunning o'ng bolasi
    
        # Aylantirishni amalga oshirish
        y.right = main
        main.left = x
        
        # Balandliklarni yangilash
        main.height = 1 + max(self.get_height(main.left), self.get_height(main.right))
        y.height = 1 + max(self.get_height(y.left), self.get_height(y.right))  
        
        return y  # Yangi ildizni qaytaradi
    
    # Tugunning balandligini qaytaruvchi yordamchi funksiya
    def get_height(self, node):
        if not node:  # Agar tugun bo'sh bo'lsa, balandlik 0
            return 0
        return node.height  # Aks holda, tugunning balandligi qaytariladi
    
    # Tugunning balansini tekshiruvchi yordamchi funksiya
    def get_balance(self, node):
        if not node:  # Agar tugun bo'sh bo'lsa, balans 0
            return 0
        return self.get_height(node.left) - self.get_height(node.right)  # Chap va o'ng balandlik farqi qaytariladi
    
    # Pre-order traversal: Daraxtni ildizdan boshlanib chop etish
    def pre_order(self, root):
        if not root:
            return
        print(root.key, end=" ")  # Tugun qiymatini chop etish
        self.pre_order(root.left)  # Chap tomonni qayta chaqirish
        self.pre_order(root.right)  # O'ng tomonni qayta chaqirish

# AVL daraxtidan foydalanish misoli
avl = AVL_Tree()  # AVL daraxt obyektini yaratish
root = None  # Daraxtning ildizini boshlang'ich qilib belgilash
x_res = [10, 15, 20, 25, 30, 35]  # Daraxtga qo'shiladigan qiymatlar

# Har bir qiymatni daraxtga qo'shish
for x in x_res:
    root = avl.insert(root, x)

# Daraxtni PreOrder traversalda chop etish
print("AVL -- PreOrder:")
avl.pre_order(root)
