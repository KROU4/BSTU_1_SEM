#include <iostream>
using namespace std;
void main()

{
	setlocale(LC_ALL, "RUS");
	int b = 4, n = 200, i = 1;
	double a = 1, h, x, s1 = 0, s2 = 0, z;
	h = (b - a) / (2 * n);
	x = a + 2 * h;
	for (i; i < n; i++)
	{
		s2 += x * exp(4) + 4;
		x += h;
		s1 += x * exp(4) + 4;
		x += h;
	}

	z = (a * exp(4) + 4 + 4 * ((a + h) * exp(4) + 4) + 4 * s1 + 2 * s2 + b * exp(4) + 4) * h / 3;
	cout << "z = " << z << endl;

}