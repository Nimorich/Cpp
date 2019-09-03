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
		{"������", "������ �� ���� �����, ����� ����"},
		{"�������", "����� ����, ����� ������"},
		{"������", "������ �������"},
		{"������", "������ ������"},
		{"�������", "�������"}
	};
	string intext;
	int count = 0;
	while (intext != "�����")
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
		cout << "������ ����� !" << endl;
		
		 
		cin >> intext;
		while ((intext != slovo) && (intext != "�����"))
		{
			--count;
			if (intext == "������") { --count; cout << podskazka << endl;}
			else cout << "�� �����, �������� ����� " << count << " �����." << endl;
			cout << "______________" << text << endl;
			cin >> intext;
			
		}
		if (intext == slovo)
		{
			count += len;
			cout << "\n����������, �� ������ !!!" << " + " << len << " �����." << endl;
			cout << "����� : " << count << " ���(�)-�� !" << endl;
		}   
		cout << "�� ������ ������ '�����' ��� ������ �� ����" << endl << endl;
		if (intext == "�����") break;
	}
	system("pause");
	return 0;
}
