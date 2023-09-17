#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int n, x, summa = 0;
	cout << "Из скольки элементов дана последовательность? ";
	cin >> n;
	for (int a = 1; a <= n; a++)
	{
		cout << "Введите x = ";
		cin >> x;
		if (x % 2 == 0)
		{
			summa += x;
		}
	}
	cout << "Сумма чётных элементов = " << summa;
	return (0);
}