class Sides:

    def __init__(self, length):

        self.length = length

def find(x, y):

    temp = 0

    x = x ** 2
    y = y ** 2
    temp = x + y

    temp = temp ** 0.5

    return(temp)

def main():

    while True:

        x = float(input("Enter length of leg a : "))

        if x > 0:

            break

    while True:

        y = float(input("Enter length of leg b : "))

        if y > 0:

            break

    a = Sides(x)
    b = Sides(y)

    temp = find(a.length, b.length)

    c = Sides(temp)

    print(f"The hypotenuse side length is {c.length}")

main()