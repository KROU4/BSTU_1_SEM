#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int** A, row, col, i, j, max;
	cout << "Введите число строк матрицы "; cin >> row;
	cout << "Введите чиcло столбцов "; cin >> col;
	A = new int* [row];
	for (int i = 0; i < row; i++)
		A[i] = new int[col];
	for (i = 0; i < row; i++)
		for (j = 0; j < col; j++)
		{
			cout << "Введите A[" << i << "],[" << j << "]= ";
			cin >> *(*(A + i) + j);
		}
	int C = 0;
	for (i = 0; i < row; i++) {
		int D = 0;
		for (j = 0; j < col; j++)
			if (*(*(A + i) + j) == 0)
			{
				D = D + 1;
			}
		if (D == 0)
			C = C + 1;
	}
	cout << "Количество строк не содержащих ни одного нулевого элемента " << C << endl;
	max = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			int c = 0;
			int e = *(*(A + i) + j);
			for (int k = 0; k < row; k++)
				for (int l = 0; l < col; l++)
					if (*(*(A + k) + l) == e)
						c = c + 1;
			if (c > 1)
				if (max < e) {
					max = e;
				}
		}
	}
	cout << "Максимальное из чисел, встречающееся болше одного раза: " << max << endl;
	for (int k = 0; k < row; k++)
		delete A[k];
	delete[] A;
}