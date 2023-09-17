#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int N, k, ost = 0, count = 0;
	int* arr = new int[100];
	cout << "Input N: "; cin >> N;
	cout << "Input m: "; cin >> k;
	while (N > 9)
	{
		ost = N % 10;
		N = (N - ost) / 10;
		if (ost % k == 0)
		{
			arr[count] = ost;
			count++;
			cout << ost << endl;
		}
		else { continue; }
	}

	return 0;
}
