class Name:

    def __init__(self, name):
        self.name = name

    def greet(self):
        print(f"Hey, {self.name}.")

s = input("Enter your name : ")
p = Name(s)
p.greet()