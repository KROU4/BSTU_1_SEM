#include <ctime>
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	srand(time(0));
	int i = 0, j = 0, ** A, sz = 4, min = 100, max = 0, sMin = 0, sMax = 0;
	A = new int* [sz];
	for (i = 0; i < 4; i++)
	{
		A[i] = new int[sz];
		for (j = 0; j < 4; j++)
		{
			A[i][j] = rand() % 99;
			cout << A[i][j] << "\t";
		}
		cout << "\n";
	}

	for (i = 0; i < 4; i++)
	{
		if (i == 0)
		{
			for (j = 0; j < 4; j++)
			{
				if (A[i][j] < min)
				{
					min = A[i][j];
				}
			}
			sMin += min;
			min = 100;
		}

		if (i == 1)
		{
			for (j = 0; j < 4; j++)
			{
				if (A[i][j] > max)
				{
					max = A[i][j];
				}
			}
			sMax += max;
			max = 0;
		}

		if (i == 2)
		{
			for (j = 0; j < 4; j++)
			{
				if (A[i][j] < min)
				{
					min = A[i][j];
				}
			}
			sMin += min;
			min = 100;
		}

		if (i == 3)
		{
			for (j = 0; j < 4; j++)
			{
				if (A[i][j] > max)
				{
					max = A[i][j];
				}
			}
			sMax += max;
			max = 100;
		}
	}
	cout << "Сумма минимальных элементов нечётных строк: " << sMin << endl;
	cout << "Сумма максимальных элементов чётных строк: " << sMax << endl;
	delete[] A;
}