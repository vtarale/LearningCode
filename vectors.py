class Vector:

    def __init__(self, x, y):

        self.x = x
        self.y = y

    def __add__(self, other):

        x = self.x + other.x
        y = self.y + other.y

        return(Vector(x, y))

def main():

    x1 = int(input("Enter length of x in Vector a : "))
    y1 = int(input("Enter length of y in Vector a : "))

    print()
    print()

    a = Vector(x1, y1)

    x2 = int(input("Enter length of x in Vector b : "))
    y2 = int(input("Enter length of y in Vector b : "))

    print()
    print()

    b = Vector(x2, y2)

    c = a + b

    print(f"The length of x in Vector c : {c.x}")
    print(f"The length of y in Vector c : {c.y}")

    print()
    print()

main()