#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Russian");
    int A, position, n, razn;
    char tmp[33];
    cout << "Введите A ";
    cin >> A;
    _itoa_s(A, tmp, 2);
    cout << "Представление числа в двоичном коде: " << tmp << endl;
    cout << "Введите начальную позицию ";
    cin >> position;
    cout << "Введите число битов ";
    cin >> n;
    razn = position - n;
    while (position >= razn)
    {
        A |= 1 << position;
        _itoa_s(A, tmp, 2);
        position--;
    }
    cout << tmp << endl;
}