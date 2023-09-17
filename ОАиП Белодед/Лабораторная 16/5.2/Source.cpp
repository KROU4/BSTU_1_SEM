//Написать программу, которая вводит несколько строк текста и символ поиска и определяет суммарное число вхождений символа в текст.
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str; // Строка ввода
	char search; // Символ поиска
	int count = 0; // Суммарное число вхождений символа в текст

	// Запрос на ввод текста
	cout << "Enter text: ";
	getline(cin, str);

	// Запрос на ввод символа для поиска
	cout << "Enter search character: ";
	cin >> search;

	// Подсчет суммарного числа вхождений символа в текст
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == search) {
			count++;
		}
	}

	// Вывод результата
	cout << "Number of occurrences of '" << search << "' in the text: " << count << endl;

	return 0;
}