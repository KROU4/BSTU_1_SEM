#include <iostream>

int main() {
    using namespace std;
    const int n = 10;

    int* a = new int[n];
    int* b = new int[n];

    cout << "first massive:\n ";
    for (int i = 0; i < 10; i++)
        cin >> a[i];
    cout << "\nsecond massive:\n ";
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
    cout << "Max = " << max;


    return 0;
}
