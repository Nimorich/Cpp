# Генератор рандомных чисел

import random

print("Угадай число")

while True:
	result = random.randint(1, 5)
	_input = int(input("Ввод \n"))
	while _input != result:
		if _input < result:
			print("Меньше")
		else _input > result:
			print("Больше")
	print("Правильно !")
input("\nEnter")
