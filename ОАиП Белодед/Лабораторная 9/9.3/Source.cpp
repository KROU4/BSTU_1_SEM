#include <iostream>
void main()
{
    using namespace std;
    setlocale(LC_ALL, "RUS");
    double a = 3, b = 6, e = 0.0001, x;
    while (abs(a - b) > (2 * e))
    {
        x = (a + b) / 2;
        if ((sin(a) + pow(a, 3)) * (sin(x) + pow(x, 3)) <= 0) b = x;
        else a = x;
    }
    cout << "x = " << x << endl;
}