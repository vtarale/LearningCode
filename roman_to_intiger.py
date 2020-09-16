from sys import exit

def check(c):
    v = 0

    if c == "I":
        v = 1
    elif c == "V":
        v = 5
    elif c == "X":
        v = 10
    elif c == "L":
        v = 50
    elif c == "C":
        v = 100
    elif c == "D":
        v = 500
    elif c == "M":
        v = 1000

    return v

def main():
    s = input("Enter a roman numeral :  ")

    c1 = 0
    c2 = 0
    ans = 0

    for c in s:
        c1 = check(c)

        if c1 == 0:
            print("You entered a wrong roman numeral")
            exit(1)

    for ch in range(len(s)):
        c1 = check(s[ch])

        if ch + 1 < len(s):
            c2 = check(s[ch + 1])

            if c1 >= c2:
                ans += c1
            else:
                ans = ans + c2 - c1
                ans = ans - c2
                ch += 2

        else:
            ans += c1

    print(f"Answer:{ans}")

main()