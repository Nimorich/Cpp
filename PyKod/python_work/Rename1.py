# Отгадайка число
# Компьютер выбирает случайное число в диапазоне от 1 до 100

import random
go = 1
while (go == 1):
        print( "\tДобро пожаловать в игру 'Отгадай число'!")
        print("\nЯ загадал натуральное число из диапазона от 1 до 100.")
        print("Постарайтесь отгадать его за минимальное число попыток.\n")

        the_number = random.randint(1, 100)
        guess = int(input("\nВведите число и нажмите 'Enter': "))
        tries = 1

        while guess != the_number:
            if guess > the_number:
                print("\nМеньше")
            else:
                print("\nБольше")
            guess = int(input("\nВведите число и нажмите 'Enter': "))
            tries += 1
        if guess == the_number:
            print("\n\n\tBaм удалось отгадать число! \n\nЗагаданное число действительно - ", the_number)
            print("Bы затратили на отгадывание", tries, " попыток!\n")
        print("Игра окончена. \n\nХотите сыграть еще? - 1, \nВыход - 2: ")
        go = int(input())
