#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	double p, q, pii = 1, y[] = { 3, -2, 0.9, 0.5, 1 };
	int min = INT_MAX;
	for (int i : y)
	{
		if (i < min) {
			min = i;
		}
	}
	p = min;
	for (size_t i = 0; i < size(y); ++i)
	{
		const double mass = y[i];
		pii *= mass;
	}
	for (size_t i = 0; i < size(y); ++i)
	{
		const double mass = y[i];
		q = pii * (mass - 5) + p;
		cout << "При y = " << y[i] << "; Q = " << q << endl;
	}
}