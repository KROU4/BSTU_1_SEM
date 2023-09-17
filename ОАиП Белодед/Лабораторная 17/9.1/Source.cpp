//������� ���������� ������, ���������� 15 ���������, ��������� ��� ���������� ���������� � ��������� �� 1 �� 200. 
//���������� ������������ ���� ��������� �������, �������� ������� ������ 50.
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void fillArray(int arr[], int size);
int multElementsLess50(int arr[], int size);

int main()
{
	setlocale(LC_ALL, "RUS");

	const int size = 15;
	int arr[size];

	fillArray(arr, size);
	int result = multElementsLess50(arr, size);

	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;

	cout << "������������ ��������� �������, �������� ������� ������ 50 �����: " << result << endl;

	return 0;
}

void fillArray(int arr[], int size)
{
	srand(time(0));
	for (int i = 0; i < size; i++)
		arr[i] = rand() % 200 + 1;
}

int multElementsLess50(int arr[], int size)
{
	int result = 1;
	for (int i = 0; i < size; i++)
		if (arr[i] < 50)
			result *= arr[i];
	return result;
}