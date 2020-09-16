import random
import string
import os
import time

def load():

    print("\n\n\nGenarating\n\n\n")
    time.sleep(.5)
    os.system("clear")

    print("\n\n\nGenarating.\n\n\n")
    time.sleep(.5)
    os.system("clear")

    print("\n\n\nGenarating..\n\n\n")
    time.sleep(.5)
    os.system("clear")

    print("\n\n\nGenarating...\n\n\n")
    time.sleep(.5)
    os.system("clear")

choose = string.ascii_letters + string.digits + string.punctuation
temp = []

max_len = int(input("Enter length password : "))
os.system("clear")

for j in range(3):

    load()

for i in range(max_len):

    temp.append(random.choice(choose))
    random.shuffle(temp)

print("Password genarated")

password = ""

for c in temp:

    password = password + c

print(password)