stack = []
rev = []

while True:

    s = input("Enter a string : ")

    if(len(s) < 100):

        for c in s:

            stack.append(c)

        break

for i in range(len(stack)):

    rev.append(stack.pop())

for j in range(len(rev)):

    print(rev[j], end="")

print()