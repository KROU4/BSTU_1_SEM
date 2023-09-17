#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int a;
	cout << "Введите номер желаемого задания: "; cin >> a;
	switch (a)
	{
	case 1: {
		char x1, x2;
		char xDiff[3];
		cout << "Введите английскую строчную букву: "; cin >> x1;
		cout << "Введите английскую прописную букву: "; cin >> x2;
		_itoa_s(int(x1 - x2), xDiff, 16);
		cout << "Разница в 10 системе: " << x1 - x2 << endl;
		cout << "Разница в 16 системе: " << xDiff << endl << endl;
		break; }
	case 2: {
		char y1, y2;
		char yDiff[3];
		cout << "Введите русскую строчную букву: "; cin >> y1;
		cout << "Введите русскую прописную букву: "; cin >> y2;
		_itoa_s(int(y1 - y2), yDiff, 16);
		cout << "Разница в 10 системе: " << y1 - y2 << endl;
		cout << "Разница в 16 системе: " << yDiff << endl << endl;
		break; }
	case 3: {
		int count;
		cout << "Введите число: "; cin >> count;
		char symb = count;
		cout << "Ваше число конвертированное, согласно таблице ASCII: " << symb << endl;
		cout << endl;
		cout << "Ваше число в шестнадцатеричной система счисления: " << hex << count << endl;
		break; }

	default:
		cout << "Введите действительное значение!" << endl;
		break;
	}


}