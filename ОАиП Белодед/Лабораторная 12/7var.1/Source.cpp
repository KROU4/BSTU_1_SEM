#include <iostream>
#include <time.h>
int main()
{
	srand(unsigned(time(NULL)));
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int n, k;
	cout << "Введите число k "; cin >> k;
	cout << endl;
	cout << "Введите размер массива "; cin >> n;
	int* A = new int[n];
	for (int i = 0; i < n; i++)
	{
		A[i] = rand() % 100;
		cout << A[i] << endl;
	}
	cout << endl;
	cout << " номера элементов > k: ";
	for (int i = 0; i < n; i++)
	{
		if (*(A + i) > k)
			cout << i << ' ';
	}
	cout << endl;
	cout << " номера элементов < k: ";
	for (int i = 0; i < n; i++)
	{
		if (*(A + i) < k)
			cout << i << ' ';
	}
	cout << endl;
	cout << " номера элементов = k: ";
	for (int i = 0; i < n; i++)
	{
		if (*(A + i) == k)
			cout << i << ' ';
	}
	cout << endl;

	return 0;

}
