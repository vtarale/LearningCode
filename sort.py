numbers = []
el = int(input("Enter elements:"))

for i in range(el):

    num = float(input(f"Enter number {i + 1}: "))
    numbers.append(num)

numbers.sort()

for j in [0, 1]:
    print()

print(f"Answer:{numbers}")