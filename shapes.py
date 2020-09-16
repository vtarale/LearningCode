class Shape:

    def __init__(self, la, ba, lb, bb):

        self.la = la
        self.ba = ba
        self.lb = lb
        self.bb = bb

def main():

    print("Enter the following imformation")
    xb = float(input("Enter the breath : "))
    xl = float(input("Enter the length : "))

    if xb > xl:

        xb, xl = xl, xb

    a = Shape(xl, xb, xl, xb)

    if a.la == a.lb and a.ba == a.bb and a.la != a.bb:

        print("The shape is a Rectangle")

    if a.la == a.lb and a.lb == a.ba and a.ba == a.bb:

        print("The shape is a Square")

main()