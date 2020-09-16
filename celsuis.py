class Temp:

    def __init__(self, t):

        self.temperature = t

def main():

    find = lambda x:Temp(x * 9/5 + 32)

    cel = float(input("Enter celisius : "))

    c = Temp(cel)
    f = find(c.temperature)

    print(f.temperature)

main()