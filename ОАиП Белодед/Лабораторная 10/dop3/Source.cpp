#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    system("cls");
    setlocale(LC_ALL, "Russian");
    int i;
    int kol = 1;
    int maxcol = 0;
    const int SZ = 10;
    int A[SZ] = { 4,2,4,4,4,4,4,4,3,7 };
    for (i = 0; i < SZ; i++)
    {
        printf("A[i%d]=%d\n", i, A[i]);
    }
    for (i = 0; i < SZ - 1; i++)
    {
        if (A[i] == A[i + 1])
        {
            kol++;
            if (kol > maxcol)
                maxcol = kol;
        }
        else
        {
            kol = 1;
        }
    }
    printf(" Hаибольшее число подряд идущих одинаковых элементов=%d\n", maxcol);
    return 0;
}