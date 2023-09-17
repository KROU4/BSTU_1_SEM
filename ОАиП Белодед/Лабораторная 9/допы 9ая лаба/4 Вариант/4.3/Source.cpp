#include <iostream>
using namespace std;
void main()

{
	setlocale(LC_ALL, "RUS");
	double a = 2, b = 3, e = 0.0001, x;
	while (abs(a - b) > (2 * e))
	{
		x = (a + b) / 2;
		if ((exp(x) - 1 / x) * (exp(a) - 1 / a) <= 0) b = x;
		else a = x;
	}

	cout << "x = " << x << endl;
}