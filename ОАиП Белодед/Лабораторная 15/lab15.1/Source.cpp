#include <ctime> // В одномерном массиве, состоящем из n вещественных элементов, вычислить произведение положительных элементов массива и сумму элементов массива, расположенных до минимального элемента
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(0));
	int size, i = 0;
	float* A, p = 1, sum = 0, min = 100, count = 0;
	cout << "Введите размер массива: ";
	cin >> size;
	A = new float[size];
	for (i = 0; i < size; i++)
	{
		A[i] = 0.01 * (rand() % 10000) - 65;
		cout << A[i] << endl;
		if (A[i] > 0)
		{
			p *= A[i];
		}
		if (A[i] < min)
		{
			min = A[i];
			count = i;
		}
	}
	for (i = 0; i < count; i++)
	{
		sum += A[i];
	}
	cout << "Произведение положительных элементов: " << p << "\n";
	cout << "Сумма элементов до минимального элемента: " << sum << "\n";
}

