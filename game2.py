import random
import sys

while True:

    num = random.randint(1, 99999)

    temp = int(input(f"{num} : "))

    if temp > 1 or temp < 0:

        continue

    if num % 2 == 0:

        if temp == 1:

            print("You have lost the game")
            sys.exit(1)

    else:

        if temp == 0:

            print("You have lost the game")
            sys.exit(1)