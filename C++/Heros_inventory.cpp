//Программа Hero's Inventory
//Демонстрирует работу с массивами
#include <iostream>
using namespace std;
int main()
{
	const int MAX_ITEMS = 10;
	string inventory[MAX_ITEMS];
	int numItems = 0;
	inventory[numItems++] = "Sword";
	inventory[numItems++] = "Armor";
	inventory[numItems++] = "Shield";
	cout << "Your items: " << endl;
	for (int i = 0; i < numItems; i++) cout << inventory[i] << endl;
	cout << "\nYou trade your sword for a battle axe. " << endl;
	inventory[0] = "Battle axe";
	cout << "Your items: " << endl;
	for (int i = 0; i < numItems; i++) cout << inventory[i] << endl;
	cout << "\nThe item name '" << inventory[0] << "' has." << endl;
	cout << inventory[0].size() << " letters in it. " << endl;
	cout << "You find a healing potion." << endl;
	if (numItems<MAX_ITEMS) inventory[numItems++] = "Healing potion";
	else cout << "You have too many items and can't carry another." << endl;
	cout << "You items: " << endl;
	for (int i = 0; i < numItems; i++) cout << inventory[i] << endl;
	return 0;
}
