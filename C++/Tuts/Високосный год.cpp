#include <iostream>
using namespace std;

int main()
{
	int year;
	cout << "Введите год: ";
	cin >> year;
	
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
				cout << year << " - год високостный";
			else
				cout << year << " - год невисокостный";
		}
		else
			cout << year << " - год високостный";
	}
	else
		cout << year << " - год невисокостный";
	cout << endl;

	system("pause");
	return 0;
}
