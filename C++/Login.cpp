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
		cout << "\n������� ���: ";
		cin >> name;
		cout << "������� ������: ";
		cin >> pass;
		if (name == "admin" && pass == "admin")
		{
			cout << "\n����� ���������� ������������� !" << endl;
			success = true;
		}
		else if (name == "guest" && pass == "guest")
		{
			cout << "������ ����� !" << endl;
			success = true;
		}
		else
		{
			cout << "\n�������� ����� ��� ������ !" << endl;
			success = false;
		}
	}while (!success);
	
	return 0;
}
