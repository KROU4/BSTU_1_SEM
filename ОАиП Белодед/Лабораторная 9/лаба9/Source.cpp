#include <iostream>
void main()
{
    using namespace std;
    setlocale(LC_ALL, "RUS");
    int n = 200, i = 1;
    double h, x, s1 = 0, s2 = 0, z, a = 3, b = 6;
    h = (b - a) / (2 * n);
    x = a + 2 * h;
    for (i; i < n; i++)
    {
        s2 += pow(x, 3) + 3;
        x += h;
        s1 += pow(x, 3) + 3;
        x += h;
    }
    z = (h / 3) * (pow(a, 3) + 3 + 4 * (pow((a + h), 3) + 3) + 4 * s1 + 2 * s2 + pow(b, 3) + 3);
    cout << "z=" << z << endl;
}