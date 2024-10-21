class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None
        self.size = 0
    
    def append(self, value):
        new_node = Node(value)
        if not self.head:
            self.head = new_node
            self.size += 1
            return
        
        last = self.head
        while last.next:
            last = last.next
        last.next = new_node
        self.size += 1

    def delete(self, data):
        current = self.head
        if current and current.data == data:
            self.head = current.next
            current = None
            return
        prev = None 
        while current and current.data != data:
            prev = current
            current = current.next
        if current is None:
            return
        prev.next = current.next
        current = None 
        
    def get_nodes(self) -> str:
        current = self.head
        res = ""
        while current:
            res += str(current.data) + " → "
            current = current.next
        res += "None"
        return res
    
    def show_nodes(self):
        current = self.head
        while current:
            print(current.data, end=" → ")
            current = current.next
        print("None")
    
    def get_size(self) -> int:
        return self.size




x = LinkedList()

x.append(1) #LLga yangi element qo'shdik
x.append(2) #LLga yangi element qo'shdik
x.append(3) #LLga yangi element qo'shdik
print(x.head.next.data) # LLning 1-elementi
print(x.head.next.next.data) # LLning 2-elementi
print(x.get_size()) # LLning uzunligi!
x.show_nodes() # tugunlarni ekranga chiqaradi   
x.delete(2) # LLning 2 qiymatini olib tashlaymiz
nodes_ =  x.get_nodes() #tugunlarni qaytaradi uni istasangiz .split() qilib listga o'girishingiz mumkin
print(nodes_)    
