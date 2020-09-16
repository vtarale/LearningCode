numbers = []

while True:

    print("Choose what you want to do")
    print("Press 1 for Addition")
    print("Press 2 for Subtraction")
    print("Press 3 for Multiplication")
    print("Press 4 for Division")
    t = int(input(":"))

    if t > 0 and t < 5:
        break

answer = 0

while True:

    el = int(input("Enter positive elements: "))

    if el > 0:
        break

for i in range(el):

    num = float(input(f"Enter number {i + 1} : "))
    numbers.append(num)

answer = numbers[0]

if t == 1:

    for j in range(len(numbers)-1):
        answer += numbers[j + 1]

    print(f"Answer:{answer}")

elif t == 2:

    for j in range(len(numbers)-1):
        answer -= numbers[j + 1]

    print(f"Answer:{answer}")

elif t == 3:

    for j in range(len(numbers)-1):
        answer *= numbers[j + 1]

    print(f"Answer:{answer}")

elif t == 4:

    for j in range(len(numbers)-1):
        answer /= numbers[j + 1]

    print(f"Answer:{answer}")
