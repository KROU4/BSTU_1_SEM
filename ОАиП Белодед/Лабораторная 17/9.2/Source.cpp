//���� ������������� ������� A ����������� n x m � ������ B ����������� m x 1. 
//���� ��� ����� ������������, �� ���������� ������������ ���� ��������.
#include <iostream>
#include <string>
#include <locale>

using namespace std;

// ������� ��� ����� ������� 
void enterMatrix(int n, int m, int** matrix) {
	cout << "������� �������� �������:" << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << "A[" << i << "][" << j << "] = ";
			cin >> matrix[i][j];
		}
	}
}

// ������� ��� ����� ������� 
void enterVector(int m, int* vector) {
	cout << "������� �������� �������:" << endl;
	for (int i = 0; i < m; i++) {
		cout << "B[" << i << "] = ";
		cin >> vector[i];
	}
}

// ������� ��� �������� �������� ��������� ������� � �������
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

// ������� ��� ���������� ������������ ������� � �������
int multiply(int n, int m, int** matrix, int* vector) {
	int result = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			result += matrix[i][j] * vector[j];
		}
	}

	return result;
}

// ������� �������
int main() {
	setlocale(LC_ALL, "RUS");

	int n, m;
	cout << "������� ����������� ������� (n x m):" << endl;
	cout << "n = ";
	cin >> n;
	cout << "m = ";
	cin >> m;

	// ������������� ������������ ��������
	int** matrix = new int* [n];
	for (int i = 0; i < n; i++) {
		matrix[i] = new int[m];
	}
	int* vector = new int[m];

	// ���� ������� � �������
	enterMatrix(n, m, matrix);
	enterVector(m, vector);

	// �������� �������� ���������
	if (checkValues(n, m, matrix, vector)) {
		// ���������� ������������
		int result = multiply(n, m, matrix, vector);
		cout << "������������ ������� � ������� ����� " << result << endl;
	}
	else {
		cout << "���� ��� ��������� ��������� ������� ��� ������� �� �������� ��������������!" << endl;
	}

	// ������������ ������ 
	for (int i = 0; i < n; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;
	delete[] vector;

	return 0;
}