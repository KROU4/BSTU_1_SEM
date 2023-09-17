#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RUS");
	double a = 1, b = 1.5, e = 0.0001, x;
	while (abs(a - b) > (2 * e))
	{
		x = (a + b) / 2;
		if ((pow(a, 3) + 2 * a - 4) * (pow(x, 3) + 2 * x - 4) <= 0) b = x;
		else a = x;
	}
	cout << "x = " << x << endl;
}