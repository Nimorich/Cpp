#include <iostream>
using namespace std;
int main()
{
	const int ROWS = 5;
	const int COLUMNS = 5;
	for (int i = 0; i < ROWS; ++i)
	{
		cout << i+1 << ") ";
		for (int j = 0; j < COLUMNS; ++j)
		{
			cout << i << "," << j << " ";
		}
		cout << endl;
	}
	return 0;
}
