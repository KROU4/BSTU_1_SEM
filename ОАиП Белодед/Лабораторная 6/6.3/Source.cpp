#include <iostream>
using namespace std; 

int main()
{
    setlocale(LC_ALL, "Russian");
    double s[] = {-3,8,7.4};
    double e = 2.71828182845904523536;
    double f = 1.2 * pow(10, 3);
    int m = 6;
    double y, h;
    double x = 0.2;
    for (int i =0; i<3; i++)
    {
        while (x <= 0.5)
        {
            y = (s[i] + x) / log(f) / pow(e, -s[i]);
            h = (y - m) / log(y);
            cout << "При X = " << x << "; Y = " << y << endl;
            cout << "При X = " << x << "; H = " << h << endl;
            cout << endl;
            x = x + 0.1;
        }

    }
    
}