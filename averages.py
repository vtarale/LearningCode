scores = []

el = int(input("Enter elements : "))

for i in range(el):

    num = float(input("Enter number : "))
    scores.append(num)

print(f"Answer:{sum(scores) / len(scores)}")