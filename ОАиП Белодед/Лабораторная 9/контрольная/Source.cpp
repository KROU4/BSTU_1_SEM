#include <iostream> //s = 1/2x + 1/3x+...+1/nx, где n = 4, x = 2(2)10
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	double n = 4, x = 2;
	double o = NULL;
	while (x <= 10)
	{
		o = (1 / (2 * x)) + (1 / (3 * x)) + (1 / (n * x));

		x = x + 2;
	}
	cout << "Значение S = " << o << endl;
}