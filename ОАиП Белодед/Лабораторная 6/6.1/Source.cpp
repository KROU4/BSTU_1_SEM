#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double s = 5.9;
    double e = 2.71828182845904523536;
    double f = 1.2 * pow(10, 3);
    int m = 6;
    /* int c[] = {2; 0.5; 4;}; */
    double y, h;
    double o;
    for (int n = 1; n <= 3; n++)
    {
        cout << "Введите число из массива: "; cin >> o;
        y = (s + o) / log10(f) / pow(e, -s);
        h = (y - m) / log10(y);
        cout << "При O = " << o << "; Y = " << y << endl;
        cout << "При O = " << o << "; H = " << h << endl;
        cout << endl;
    }

}
