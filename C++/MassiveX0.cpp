//Программа демострирует работу с многомерными массивами
#include <iostream>
using namespace std;
int main()
{
	const int ROWS = 3;
	const int COLUMNS = 3;
	char board[ROWS][COLUMNS] = {{'0','X','0'},{' ','X','X'},{'X','0','0'}};
	cout << "Here Tic Tac Board" << endl;
	for (int i = 0; i<ROWS; ++i)
	{
		for (int j = 0; j<COLUMNS; ++j)
		{
			cout << board[i][j];
		}
		cout << endl;
	}
	cout << "\n'X' moves to the empty location. \n\n";
	board[1][0] = 'X';
	cout << "Now the Tic Tac Board \n";
	for (int i = 0; i<ROWS; ++i)
	{
		for (int j = 0; j<COLUMNS; ++j)
		{
			cout << board[i][j];
		}
		cout << endl;
	}
	cout << "X Wins !!!" << endl;
	return 0;
}
