#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int n = 5;
	cout << endl << "Enter arr C: " << endl;
	int* C = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> C[i];
	}
	sort(C, C + n);
	for (int a = 0; a < 5; a++)
	{
		cout << C[a] << " ";
	}
	return 0;
}