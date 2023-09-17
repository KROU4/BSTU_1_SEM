#include <iostream>
using namespace std;
int main()
{
	const double n = 200;
	double x, h, S, s1 = 0, s2 = 0, a = 2, b = 3, i = 1;
	h = (b - a) / (2 * n);
	x = a + 2 * h;
	do {
		s2 = s2 + (exp(x) - 1.00 / x);
		x += h;
		s1 = s1 + (exp(x) - 1.00 / x);
		x += h;
		i += 1;
	} while (i < n);
	S = h / 3 * ((exp(x) - 1.00 / x) + 4 * (exp(x + h) - 1.00 / (x + h)) + 4 * s1 + 2 * s2 + (exp(b) - 1.00 / x));
	cout << "S="  << S << endl;
}