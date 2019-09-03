#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	enum fields {WORD, HINT, NUM_FIELDS};
	const int NUM_WORDS = 5;
	const string WORDS[NUM_WORDS][NUM_FIELDS]
	{
		{"колбаса", "Подсказка ко...са"},
		{"лепьмени", "Подсказка ....мени"},
		{"дыня", "Подсказка .ын."},
		{"мандаирины", "Подсказка .ан.а.р..ы"},
		{"океан", "Подсказка ок..н"}
	};
	srand(static_cast<unsigned int>(time(0)));
	int choice = (rand() % NUM_WORDS);
	string theWord = WORDS[choice][WORD]; // слово, которое нужно угадать
	string theHint = WORDS[choice][HINT]; // подсказка для слова
	string jumble = theWord; // перемешанный вариант слова
	int length = jumble.size();
	for (int i = 0; i<length; ++i)
	{
		int index1 = (rand()% length);
		int index2 = (rand()% length);
		char temp = jumble[index1];
		jumble[index1] = jumble[index2];
		jumble[index2] = temp;
	}
	
	cout << jumble << " : " << theHint << endl;
	cout << "Что за слово на экране, отгадай !? " << endl;
	string guess;
	cin >> guess;
	while ((guess!=theWord) && (guess!="выход"))
	{
		if (guess == "хелп") cout << theHint;
		else cout << "Не верно !" << endl;
		cout << "\n Ты можешь попросить подсказку, напиши - 'хелп' " << "Или 'выход' для выхода\n";
		cout << "ИЛИ ПОПРОБУЙ СНОВА !!! : "<< jumble << endl;
		cin >> guess;
	}
	if (guess == theWord) cout << "Поздравляю, ты ответил верно !" << endl;
	cout << "Спасибо за игру!" << endl;
	system("pause");
	return 0;
}
