#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int b = 3, a = 2;
	double sum = 0, h, x;
	const double n = 200;
	h = (b - a) / n;
	x = a;
	for (x; x <= b; x = x + h)
	{
		sum = sum + h * ((exp(x) - 1.00 / x) + (exp(x + h) - 1.00 / (x + h))) / 2;

	}
	cout << "sum=" << sum << endl;
}