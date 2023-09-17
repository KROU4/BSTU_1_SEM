#include<conio.h>
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

void main()
{
    srand(time(0));
    setlocale(LC_ALL, "Russian");
    int sum = 0;
    int arr[20];
    for (int i = 0; i < 20; i++)
    {
        arr[i] = rand() % 201 - 100;
        if ((arr[i] > 0) && (arr[i + 1] < 0) || (arr[i] < 0) && (arr[i + 1] > 0))
            sum++;

    }
    for (int i = 0; i < 20; i++)
    {
        cout << arr[i] << " ";
        if ((i + 1) % 5 == 0)
            cout << endl;
    }
    cout << endl << sum << " Чередований" << endl;
}