#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int a[10], b[10];
    cout << "Первый массив:\n ";
    for (int i = 0; i < 10; i++)
        cin >> a[i];
    cout << "\nВторой массив:\n ";
    for (int i = 0; i < 10; i++)
        cin >> b[i];
    int max = a[0];
    for (int i = 0; i < 10; i++)
    {
        if (a[i] != b[i])
        {
            if (a[i] > max)
                max = a[i];
        }
    }
    cout << "Максимум = " << max;
}