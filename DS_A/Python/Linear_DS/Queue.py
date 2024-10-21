class MyQueue:

    def __init__(self):
        self.val = []

    def push(self, x: int) -> None:
        self.val.append(x)

    def pop(self) -> int:
        x = self.val[0]
        del self.val[0]
        return x

    def peek(self) -> int:
        return self.val[0]

    def empty(self) -> bool:
        return len(self.val)==0
