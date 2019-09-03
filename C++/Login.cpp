#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	string pass;
	bool success;
	do
	{
		cout << "\nВведите имя: ";
		cin >> name;
		cout << "Введите пароль: ";
		cin >> pass;
		if (name == "admin" && pass == "admin")
		{
			cout << "\nДобро пожаловать администратор !" << endl;
			success = true;
		}
		else if (name == "guest" && pass == "guest")
		{
			cout << "Привет гость !" << endl;
			success = true;
		}
		else
		{
			cout << "\nНеверный логин или пароль !" << endl;
			success = false;
		}
	}while (!success);
	
	return 0;
}
