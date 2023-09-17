#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "rus");
    int i, len, maxlen;
    const char* str = "10010010101000101000101100001000010110001101011010";
    for (i = 1, len = maxlen = 1; str[i]; i++)
        if (str[i] == str[i - 1]) {
            len++;
            maxlen = len > maxlen ? len : maxlen;
        }
        else
            len = 1;
    cout << "Количество групп с четным количеством символов - " << maxlen << endl;
    return 0;
}