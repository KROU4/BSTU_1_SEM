#include <iostream>
void main()
{
    using namespace std;
    setlocale(LC_ALL, "RUS");
    double h, x, s = 0, a = 3, b = 6, n = 200;
    h = (b - a) / n;
    x = a;
    for (x; x < (b - h); x += h)
    {
        s = s + h * (pow(x, 3) + 3 + pow((x + h), 3) + 3);
        x = x + h;
    }
    cout << "Площадь s = " << s << endl;
}