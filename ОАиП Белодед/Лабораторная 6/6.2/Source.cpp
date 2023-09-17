#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double s = 5.9;
    double e = 2.71828182845904523536;
    double f = 1.2 * pow(10, 3);
    int m = 6;
    double y, h;
    double x = 0;
    while (x <= 0.9)
    {
        y = (s + x) / log10(f) / pow(e, -s);
        h = (y - m) / log10(y);
        cout << "При X = " << x << "; Y = " << y << endl;
        cout << "При X = " << x << "; H = " << h << endl;
        cout << endl;
        x = x + 0.1;
    }
}