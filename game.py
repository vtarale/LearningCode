from random import randint
import time

def main():

    choice = ["rock", "paper", "scissor"]
    point_com = 0
    point_play = 0

    tim = int(input("Enter how many points : "))

    while point_com < tim and point_play < tim:

        com = choice[randint(0, 2)]

        time.sleep(3)
        print("Rock Paper Scissor Shoot!!")
        time.sleep(1)

        play = input("Choose Rock, Paper, Scissor : ").lower()

        if play != choice[0] and play != choice[1] and play != choice[2]:

            print("You have entered invaild input")
            continue

        if com == choice[0]:

            if play == choice[2]:

                print(f"The computer has put {com}.")
                print("So, computer gets one point")

                point_com += 1

            else:

                if play == choice[1]:

                    print(f"The computer has put {com}.")
                    print("So, you get a point")

                    point_play += 1

                else:

                    print(f"The computer has put {com}.")
                    print("So, no one gets a point")

        elif com == choice[1]:

            if play == choice[0]:

                print(f"The computer has put {com}.")
                print("So, computer gets one point")

                point_com += 1

            else:

                if play == choice[2]:

                    print(f"The computer has put {com}.")
                    print("So, you get a point")

                    point_play += 1

                else:

                    print(f"The computer has put {com}.")
                    print("So, no one gets a point")
        else:

            if play == choice[1]:

                print(f"The computer has put {com}.")
                print("So, computer gets one point")

                point_com += 1

            else:

                if play == choice[0]:

                    print(f"The computer has put {com}.")
                    print("So, you get a point")

                    point_play += 1

                else:

                    print(f"The computer has put {com}.")
                    print("So, no one gets a point")

    if point_com == tim:

        print("The computer has won.")
        print("You have lost")

    else:

        print("You have won")
        print("The computer has lost")

main()