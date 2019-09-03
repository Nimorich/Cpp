#include <iostream>
#include <string>
using namespace std;

int main()
{
	string user;
	string pass;
	bool success;
	do
	{
		cout << "Введите имя: ";
		cin >> user;
		cout << "\n Введите пароль: ";
		cin >> pass;
		if (user == admin && pass admin)
		{
			cout << "Добро пожаловать администратор !" << endl;
			success = true;
		}
		else if (user == guest && pass guest)
		{
			cout << "Привет гость !" << endl;
			success = true;
		}
		else
		{
			cout << "Неверный логин или пароль !";
			success = false;
		}
	} while (!success);

	return 0;
}
