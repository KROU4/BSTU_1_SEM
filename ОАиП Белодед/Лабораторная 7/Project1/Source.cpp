#include <iostream>
using namespace std;
int main() {
    int i, j, k, t;
    for (i = 1; i <= 9; i++)
        for (j = 0; j <= 9; j++)
            for (k = 0; (k <= 9) && (i != j); k++)
                for (t = 0; (t <= 9) && (i != k) && (j != k); t++)
                    if ((i != t) && (j != t) && (k != t)) {
                        cout << i << j << k << t << endl;
                    }
    return 0;
}