#include <iostream>
#include <ctime>
int main() {
    using namespace std;
    int i, N, cur, m, n = 0;
    cout << "Number = ";
    cin >> N;

    cout << "m: ";
    cin >> m;

    cur = N;
    while (cur)   //определение к-ва цифр N
    {
        cur /= 10;
        n++;
    }

    int* ar = new int[N];
    for (i = n - 1; i > -1; i--) //заполнение массива цифр
    {
        ar[i] = N % 10;
        N /= 10;
    }

    for (i = 0; i < n; i++) {

        if (ar[i] / m)
        {
            cout << ar[i] << "  ";

        }
    }


    delete[]ar;




    return 0;
}
