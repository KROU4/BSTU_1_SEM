#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RUS");
	double h, x, s = 0, a = 1, b = 4, n = 200;
	h = (b - a) / n;
	x = a;
	for (x; x < (b - h); x += h) {
		s = s + h * (x * exp(4) + 4 + (x + h) * exp(4) + 4);
		x = x + h;
	}
	cout << "s = " << s << endl;
}