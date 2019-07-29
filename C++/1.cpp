#include <iostream>
using namespace std;
	
int main()
{
	typedef int inta;
	inta rows;
	cout << "¬ведите количество строк: ";
	cin >> rows;
	for(int i=1; i<=rows; ++i)
	{
		for(int j=1; j<=i; ++j)
		{
			cout << "* ";
		}
		cout << "\n";
	}
	
	cout << endl;
	system("pause");
	return 0;
}

