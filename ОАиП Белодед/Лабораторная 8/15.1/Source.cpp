#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int max = INT_MIN;
	double c, sum = 0, X, a;
	double massive[] = { 5, 4, 3, 2, 6, 1 };
	for (int i : massive)
	{
		if (i > max) {
			max = i;
		}
	}
	a = max;
	for (size_t i = 0; i < size(massive); ++i)
	{
		const double mass = massive[i];
		X = a / (1 + mass);
		sum += X;
	}
	c = sum;
	cout << "Значение C получается: " << c << endl;
	return (0);
}