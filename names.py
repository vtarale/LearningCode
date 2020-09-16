from sys import exit

names = []
el = int(input("Enter how many names you want:"))

for i in range(el):

    string = input("Name:")
    names.append(string)

name_find = input("Enter name to find:")

if name_find in names:

    print("Found")
    exit(0)

else:

    print("Not found")
    exit(1)