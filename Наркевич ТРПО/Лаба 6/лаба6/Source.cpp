#include <iostream>
using namespace std;

int func1()
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
	return 0;
}
int func2() {
	char y1, y2;
	char yDiff[3];
	cout << "Введите русскую строчную букву: "; cin >> y1;
	cout << "Введите русскую прописную букву: "; cin >> y2;

	if (y1 > 'а' && y1 < 'я' && y2 > 'А' && y2 < 'Я')
	{
		_itoa_s(int(y1 - y2), yDiff, 16);
		cout << "Разница в 10 системе: " << y1 - y2 << endl;
		cout << "Разница в 16 системе: " << yDiff << endl << endl;
	}
	else
	{
		cout << "Введите корректный символ!" << endl;
	}
	return 0;
}
int func3() {
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
	return 0;
}
int func4() {
	return 0;
}

int main()
{
	setlocale(LC_ALL, "ru");
	int a;
	cout << "Выберите один из вариантов:\n1 – определение разницы значений кодов в Windows-1251 буквы латинского алфавита в прописном и строчном написании; \n2 – определение разницы значений кодов в Windows-1251 буквы русского алфавита в прописном и строчном написании; \n3 – вывод в консоль кода символа, соответствующего введенной цифре. \n4 - выход из программы \n\n"; cin >> a;
	switch (a) {
		
	case (1): func1();
		break;
		

		
	case (2): func2();
		break;
		

		
	case (3): func3();
		break;
		

		
	case (4): func4();
		break;
		
		
	default: {
		cout << "Введите действительное значение!" << endl;
		break;
	}
	}
}
