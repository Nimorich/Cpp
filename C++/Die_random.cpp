#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0)));
	//запускаем генератор случайных чисел
	int randomNumber = rand(); //генерируем случайное число
	int die = (randomNumber % 6) + 1; //получаем число от 1 до 6
	cout << "Выпало число " << die << endl;

	return 0;
}
