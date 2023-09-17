#include <iostream>
#include "vybor3.h"
#include <windows.h>

using namespace std;
void number_to_code()
{
	int count;
	cout << "Введите число: "; cin >> count;
	char symb = count;
	if (count < 0 && count > 255)
	{
		cout << "Введите корректное число!" << endl;
	}
	else
	{
		cout << "Ваше число конвертированное, согласно таблице ASCII: " << symb << endl;
		cout << endl;
		cout << "Ваше число в шестнадцатеричной система счисления: " << hex << count << endl;
	}
}