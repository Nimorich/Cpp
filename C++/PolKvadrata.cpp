#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i<=7; i++)
	{
		if (i<=4)
		{
			for (int num = 1; num <= i; num++)
			{
				cout << "#";
			}	
		}
		else if (i>4)
		{
			for (int num = 1; num <= 8 - i; num++)
			{
				cout << "#";
			}
		}
		cout << endl;
	}
}
