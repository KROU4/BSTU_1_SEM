#include <iostream>
#include "vybor1.h"
#include <windows.h>

using namespace std;
void perevod_lat_to_code()
{
	char x1, x2;
	char xDiff[3];
	cout << "Введите английскую строчную букву: "; cin >> x1;
	cout << "Введите английскую прописную букву: "; cin >> x2;
	if (x1 > 'a' && x1 < 'z' || x2 > 'A' && x2 < 'Z')
	{
		_itoa_s(int(x1 - x2), xDiff, 16);
		cout << "Разница в 10 системе: " << x1 - x2 << endl;
		cout << "Разница в 16 системе: " << xDiff << endl << endl;
	}
	else
	{
		cout << "\nВведите корректный символ!" << endl;
	}
}