#include <iostream>
using namespace std;


int main()
{
	for (int i = 1; i<=7; i++)
	{
		for (int num = 1; num <= 4-abs(4 - i); num++)
		{
			cout << "#";
		}
		cout << endl;
	}
}
