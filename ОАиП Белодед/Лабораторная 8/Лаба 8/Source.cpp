#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	double q, sum = 0, X, t = 0.45;
	double massive[] = { 1.1, 6.2, 3, -4, 6, 1 };
	for (size_t i = 0; i < size(massive); ++i)
	{
		const double mass = massive[i];
		X = (mass + 1) / mass;
		sum += X;
	}
	q = sum + t;
	cout << "Значение Q получается: " << q << endl;
	return (0);
}