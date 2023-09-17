//Дана целочисленная матрица A размерности n x m и вектор B размерности m x 1. 
//Если все числа отрицательны, то определить произведение этих массивов.
#include <iostream>
#include <string>
#include <locale>

using namespace std;

// Функция для ввода матрицы 
void enterMatrix(int n, int m, int** matrix) {
	cout << "Введите элементы матрицы:" << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << "A[" << i << "][" << j << "] = ";
			cin >> matrix[i][j];
		}
	}
}

// Функция для ввода вектора 
void enterVector(int m, int* vector) {
	cout << "Введите элементы вектора:" << endl;
	for (int i = 0; i < m; i++) {
		cout << "B[" << i << "] = ";
		cin >> vector[i];
	}
}

// Функция для проверки значений элементов матрицы и вектора
bool checkValues(int n, int m, int** matrix, int* vector) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (matrix[i][j] >= 0) {
				return false;
			}
		}
	}

	for (int i = 0; i < m; i++) {
		if (vector[i] >= 0) {
			return false;
		}
	}

	return true;
}

// Функция для вычисления произведения матрицы и вектора
int multiply(int n, int m, int** matrix, int* vector) {
	int result = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			result += matrix[i][j] * vector[j];
		}
	}

	return result;
}

// Главная функция
int main() {
	setlocale(LC_ALL, "RUS");

	int n, m;
	cout << "Введите размерность матрицы (n x m):" << endl;
	cout << "n = ";
	cin >> n;
	cout << "m = ";
	cin >> m;

	// Инициализация динамических массивов
	int** matrix = new int* [n];
	for (int i = 0; i < n; i++) {
		matrix[i] = new int[m];
	}
	int* vector = new int[m];

	// Ввод матрицы и вектора
	enterMatrix(n, m, matrix);
	enterVector(m, vector);

	// Проверка значений элементов
	if (checkValues(n, m, matrix, vector)) {
		// Вычисление произведения
		int result = multiply(n, m, matrix, vector);
		cout << "Произведение матрицы и вектора равно " << result << endl;
	}
	else {
		cout << "Один или несколько элементов матрицы или вектора не являются отрицательными!" << endl;
	}

	// Освобождение памяти 
	for (int i = 0; i < n; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;
	delete[] vector;

	return 0;
}