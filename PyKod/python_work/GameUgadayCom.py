#Игра загадай число.
import random
repeat_ = ""
repeat_2 = ""
while True:
    x=1
    y=100
    z=""
    otvet = ""
    input("\nЗагадай число от 1 до 100 и нажми Enter")

    while y != 101:

        #Пользователь загадывает число от 1 до 100
        #Компьютер-(ИИ) отгадывает

        z = random.randint(x, y)
        print("Я думаю что это ", z)

        print("\nнапишите 'больше', 'меньше' или 'верно'")
        otvet = input("\nОтвет: - ")

        if otvet == "больше":
            x=z+1
            if x > y:
                print("Ты меня обманул, играем сначала.")
                repeat_2 = "да"
                break
        elif otvet == "меньше":
            y=z-1
            if y < x:
                print("Ты меня обманул, играем сначала.")
                repeat_2 = "да"
                break
        elif otvet == "верно":
            break

        elif otvet !="меньше" and otvet !="больше" and otvet !="верно":
            print("Дружище, выражайся яснее. Играем сначала.")
            repeat_2 = "да"
            break

    if repeat_2 == "да":
        continue

    print("\nУрра! Я угадал! Сыграем ещё?")
    repeat_ = input("\nда - нет\n")
    if repeat_ == "да":
        continue
    else:
        break

input("Игра окончена, спасибо. Для выхода нажми Enter")

