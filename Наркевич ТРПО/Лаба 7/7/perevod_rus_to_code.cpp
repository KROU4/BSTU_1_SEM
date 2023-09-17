#include <iostream>
#include "vybor2.h"
#include <windows.h>

using namespace std;
void perevod_rus_to_code()
{
	char y1, y2;
	char yDiff[3];
	cout << "Введите русскую строчную букву: "; cin >> y1;
	cout << "Введите русскую прописную букву: "; cin >> y2;

	if ((y2 >= 192 && y2 <= 223) || (y1 >= 224 && y1 <= 255))
	{
		_itoa_s(int(y1 - y2), yDiff, 16);
		cout << "Разница в 10 системе: " << y1 - y2 << endl;
		cout << "Разница в 16 системе: " << yDiff << endl << endl;
	}
	else
	{
		cout << "Введите корректный символ!" << endl;
	}
}