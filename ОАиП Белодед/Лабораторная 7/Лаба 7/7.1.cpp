#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	double f = -125 * pow(10, -6), y = 1.7, c, d, e = 2.71;
	double t = 1;
	while (t <= 2) {
		c = 2 * sin(f / 2) + log(t);
		if (c >= 3)
		{
			d = y * pow(e, -2 * t) + f;
		}
		else
		{
			d = y - pow(y, 3);
		}
		cout << "Ваше C равно - " << c << endl;
		cout << "Ваше D равно - " << d << endl;
		cout << endl;
		t = t + 0.1;
	}
}