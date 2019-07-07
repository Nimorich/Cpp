#include <iostream>
using namespace std;

int recurs(int x)
{
	if (x == 1)
	{
		return 1;
	}
	else
	{
		return x * recurs(x - 1);
	}	
}

int main()
{
	cout << recurs(4) << endl;
}