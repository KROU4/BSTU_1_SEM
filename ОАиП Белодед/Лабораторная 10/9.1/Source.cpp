#include <math.h>
#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "RUS");
    float mas[10] = { 35271,16032,84773,66670,15763,67076,31581,74948,49231,3505 };
    int i;
    float sr_arifm = 0;

    for (int i = 0; i < 10; i++)
        sr_arifm += mas[i];
    sr_arifm = sr_arifm / 10;

    float rozn = mas[0] - sr_arifm;
    int j = 0;

    for (i = 1; i <= 10; i++)
        if (fabs(rozn) > fabs(mas[i] - sr_arifm))
        {
            j = i;
            rozn = mas[i] - sr_arifm;
        }

    cout << "Среднее арифметическое массива - " << sr_arifm << endl << "\nНаиоболее приближённый элемент - " << mas[j];
}

