from sys import exit

def main():

    rev = []
    stack = []

    s = input("Enter a string : ").lower()

    for c in s:

        stack.append(c)

    for ch in s:

        if ch != stack.pop():

            print("The string is not palindrome")
            exit(1)

    print("The string is palindrome")

main()