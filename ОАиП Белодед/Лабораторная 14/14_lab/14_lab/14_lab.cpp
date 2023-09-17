#include <stdio.h>
#include<iostream>
#include <stdlib.h>
#include <stdbool.h>
using namespace std;

void task1() {

    const int n = 4;
    float matrix[n][n] =
    { {-1, 12, 34, 23},
      { 3, -5, -43, 21 },
      { 1, -1, 1, 1 },
      { 10, 11, 12, 13} };
    float array[n];
    for (int i = 0; i < n; i++) {
        array[i] = matrix[i][i];

    }
    float max = array[0];
    for (int i = 0; i < n; i++) {
        if (array[i] > max) {   //нахождение элемента макимума главной диагонали
            max = array[i];
        }
    }
    for (int i = 0; i < n; i++) {
        array[i] /= max;
    }
    for (int i = 0; i < n; i++) { 
        cout << array[i] << " ";
     }
    cout << endl << max << endl;




}
void task2() {

    int matrix[][4] =
    { {-1, 12, 34, 23},
      { 3, -5, -43, 21 },
      { 1, -1, 1, 1 },
      { 10, 11, 12, 13} };
    printf("Matrix\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
            printf("%2d ", matrix[i][j]);
        printf("\n");
    }
    int column = -1;
    for (int j = 0; j < 4; j++)
    {
        bool flag = true;
        for (int i = 0; i < 4; i++)
            if (matrix[i][j] < 0) flag = false;
        if (flag)
        {
            column = j;
            if (j)
            {
                j = j - 1;
                for (int k = 0; k < 4; k++)
                    matrix[k][j] *= -1;
            }
            break;
        }
    }
    printf("New matrix\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
            printf("%2d ", matrix[i][j]);
        printf("\n");
    }

    printf("Number of column: %d", column);   
}
void task3() {//1 DOP

    setlocale(0, "");
    int A[100][100], n, m, a = 0;

    cout << "Введите n: ";
    cin >> n;

    cout << "Введите m: ";
    cin >> m;

    srand((unsigned)time(NULL)); //рандом возвращает всегда разные числа

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < m; k++)
        {
            A[i][k] = rand() % 20 - 10;
            cout << A[i][k] << " ";
        }
        cout << endl;
    }

    }
void task4() {//2 DOP

    setlocale(0, "");
    int n, t;
    int array[100][100];
    int arraydop[100][100];
    cout << "Введите число ";
    cin >> n;
    for (int i = 0; i < 2 * n; i++) { //порядок умножается на 2
        for (int j = 0; j < 2 * n; j++) {
            array[i][j] = rand() % 10;
        }
    }
    for (int i = 0; i < 2 * n; i++) {
        for (int j = 0; j < 2 * n; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << "=============" << endl;
    for (int i = 0; i < 2 * n; i++) {
        for (int j = 0; j < 2 * n; j++) {
            arraydop[i][j] = array[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            array[i][j] = arraydop[i + n][j + n];
        }
    }
    for (int i = n; i < 2 * n; i++) {
        for (int j = 0; j < n; j++) {
            array[i][j] = arraydop[i - n][j + n];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = n; j < 2 * n; j++) {
            array[i][j] = arraydop[i + n][j - n];
        }
    }
    for (int i = n; i < 2 * n; i++) {
        for (int j = n; j < 2 * n; j++) {
            array[i][j] = arraydop[i - n][j - n];
        }
    }
    for (int i = 0; i < 2 * n; i++) {
        for (int j = 0; j < 2 * n; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}
void task5() {//3 DOP

    setlocale(0, "");
    int n, k = 0, c = 0;
    int array[100][100], arr[35];
    srand((unsigned)time(NULL));
    cout << "введите n ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            array[i][j] = rand() % 10;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[k] = array[i][j];
            k++;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << "==============" << endl;
    for (int i = 0; i < n * n - 1; i++)
        for (int j = 0; j < n * n - i - 1; j++)
            if (arr[j] < arr[j + 1])
                swap(arr[j], arr[j + 1]);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            array[c][c] = arr[c];
            c++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    task3();
    return 0;
}