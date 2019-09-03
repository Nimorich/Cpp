#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//Игра угадай число. Компьютер загадывает рандомное число от 1 до 100, а игрок угадывает.
int main()
{
	int game = 1;
	cout << "Добро пожаловать в игру 'Угадай число !'" << endl << endl;
	while(game == 1)
	{
		srand(static_cast<unsigned int>(time(0)));
		int secretNumber = rand() % 100 + 1;
		int guess;
		int tries = 0;
		cout << "Введите число от 1 до 100" << endl;
		do
		{
			++tries;
			cin >> guess;
			if(guess > secretNumber && guess <= 100)
			{
				cout << "Меньше !" << endl;
			}
			else if(guess < secretNumber && guess >= 1)
			{
				cout << "Больше !" << endl;
			}
			else if(guess == secretNumber)
			{
				cout << "Поздравляю !!! Ты угадал с " << tries << " попытки." << endl << endl;
				cout << "Хочешь сыграть ещё ? 1-Да/0-Нет" << endl;
				cin >> game;
				if (game == 1)
				{
					continue;
				}
				else
				{
					break;
				}
			}
			else
			{
				cout << "Неверное число " << endl;
			}
		}while(guess != secretNumber);
	}
	
	return 0;
}
