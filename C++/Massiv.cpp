#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
int main ()
{
	enum spisok {NOL, ODIN, DVA};
	const int KOLONKI = 5;
	const string MASSIV [KOLONKI][DVA] 
	{
		{"курица", "Бегает на двух ногах, несет яйца"},
		{"бегемот", "Любит воду, очень опасен"},
		{"собака", "Бывает кусачей"},
		{"машина", "Четыре колеса"},
		{"конфеты", "Сладкие"}
	};
	string intext;
	int count = 0;
	while (intext != "выход")
	{
		srand(static_cast<unsigned int>(time(0)));
		int random = (rand() % KOLONKI);
		string slovo = MASSIV[random][NOL];
		string podskazka = MASSIV[random][ODIN];
		string text = slovo;
		int len = text.size();
		for (int i=0; i<len; ++i)
		{
			int index1 = (rand()%len);
			int index2 = (rand()%len);
			char tmp = text[index1];
			text[index1] = text[index2];
			text[index2] = tmp;
		}
		cout << text << " : " << podskazka << endl;
		cout << "Угадай слово !" << endl;
		
		 
		cin >> intext;
		while ((intext != slovo) && (intext != "выход"))
		{
			--count;
			if (intext == "помощь") { --count; cout << podskazka << endl;}
			else cout << "Не верно, попробуй снова " << count << " очков." << endl;
			cout << "______________" << text << endl;
			cin >> intext;
			
		}
		if (intext == slovo)
		{
			count += len;
			cout << "\nПоздравляю, ты угадал !!!" << " + " << len << " очков." << endl;
			cout << "ИТОГО : " << count << " очк(а)-ов !" << endl;
		}   
		cout << "Ты можешь ввести 'выход' для выхода из инпы" << endl << endl;
		if (intext == "выход") break;
	}
	system("pause");
	return 0;
}
