#include <iostream>
using namespace std;

int main()
{
	int year;
	cout << "������� ���: ";
	cin >> year;
	
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
				cout << year << " - ��� �����������";
			else
				cout << year << " - ��� �������������";
		}
		else
			cout << year << " - ��� �����������";
	}
	else
		cout << year << " - ��� �������������";
	cout << endl;

	system("pause");
	return 0;
}
