#include <iostream>
#include "vybor1.h"
#include "vybor2.h"
#include "vybor3.h"
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	int n;
	cout << "¬ыберите один из вариантов:\n1 Ц ќпределение разницы значений кодов в Windows-1251 буквы латинского алфавита в прописном и строчном написании; \n2 Ц ќпределение разницы значений кодов в Windows-1251 буквы русского алфавита в прописном и строчном написании; \n3 Ц ¬ывод в консоль кода символа, соответствующего введенной цифре; \n4 Ц ¬ыход из программы." << endl;
	cin >> n;
	while (n > 4 && n < 1) {
		cout << "¬ведите ваш символ: ";  cin >> n;
	}
	switch (n) {
	case 1:
		perevod_lat_to_code();
		break;

	case 2:
		perevod_rus_to_code();
		break;

	case 3:
		number_to_code();
		break;

	case 4:
		break;
	}
}