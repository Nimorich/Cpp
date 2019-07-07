# Программа авторизацции

security = 0
login = ""
password = ""
while not login:
    login = input("Логин: ")
while not password:
    password = input("Пароль: ")

if login == "Александр" and password == "123":
    security = 5
    print("Добро пожаловать ", login, "\nУровень допуска ", security)
elif login == "Анастасия" and password == "123":
    security = 3
    print("Добро пожаловать ", login, "\nУровень допуска ", security)
elif login == "Гость" or password == "Гость":
    security = 1
    print("Добро пожаловать ", login, "\nУ вас допуск ", security)
else:
    print("Вы не местный, ступайте лесом!")

input("\nEnter")
