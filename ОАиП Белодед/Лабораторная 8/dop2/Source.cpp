#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    const int n = 8;
    int arr[n], neg;;
    for (int i = 0; i < n; i++)
    {
        cout << "Введите число: ";
        cin >> arr[i];
        if (arr[i] < 0) {
            neg = i;
        }
    }
    cout << "Последний отрицательный элемент (" << arr[neg] << "): " << neg + 1 << endl;
    system("pause");
    return 0;
}