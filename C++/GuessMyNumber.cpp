#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//���� ������ �����. ��������� ���������� ��������� ����� �� 1 �� 100, � ����� ���������.
int main()
{
	int game = 1;
	cout << "����� ���������� � ���� '������ ����� !'" << endl << endl;
	while(game == 1)
	{
		srand(static_cast<unsigned int>(time(0)));
		int secretNumber = rand() % 100 + 1;
		int guess;
		int tries = 0;
		cout << "������� ����� �� 1 �� 100" << endl;
		do
		{
			++tries;
			cin >> guess;
			if(guess > secretNumber && guess <= 100)
			{
				cout << "������ !" << endl;
			}
			else if(guess < secretNumber && guess >= 1)
			{
				cout << "������ !" << endl;
			}
			else if(guess == secretNumber)
			{
				cout << "���������� !!! �� ������ � " << tries << " �������." << endl << endl;
				cout << "������ ������� ��� ? 1-��/0-���" << endl;
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
				cout << "�������� ����� " << endl;
			}
		}while(guess != secretNumber);
	}
	
	return 0;
}
