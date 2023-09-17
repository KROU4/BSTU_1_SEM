// ƒан двумерный массив, состо€щий из N строк и ћ столбцов, а также число number. ѕроверить, находитс€ ли это число  на главной диагонали.
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");
    int N, M; // размеры двумерного массива
    cout << "¬ведите размеры двумерного массива: ";
    cin >> N >> M;

    vector<vector<int>> arr(N, vector<int>(M)); // инициализаци€ двумерного массива

    int number; // число, которое нужно проверить на наличие на главной диагонали
    cout << "¬ведите число, которое нужно проверить на наличие на главной диагонали: ";
    cin >> number;

    // «аполнение массива случайными числами
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++)
            arr[i][j] = rand() % 10;
    }

    // ¬ывод исходного массива
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    // ѕроверка числа на наличие на главной диагонали
    bool isFound = false;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            if (i == j && arr[i][j] == number)
                isFound = true;

    // ¬ывод результата
    if (isFound)
        cout << "„исло найдено на главной диагонали" << endl;
    else
        cout << "„исло не найдено на главной диагонали" << endl;

    return 0;
}