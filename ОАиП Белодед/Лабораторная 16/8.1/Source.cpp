//Дан двумерный массив, состоящий из N строк и М столбцов. Найти количество отрицательных, положительных и нулевых элементов массива.  
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

// Константные значения для заполнения массива
const int N = 10;
const int M = 10;

int main()
{
    setlocale(LC_ALL, "RUS");
    // Инициализация псевдослучайных чисел
    srand(time(0));

    // Создание двумерного массива
    int arr[N][M];

    // Объявление переменных для хранения значений
    int count_positive = 0;
    int count_negative = 0;
    int count_zero = 0;

    // Заполнение массива
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            // Генерация случайного целого числа от -10 до 10
            arr[i][j] = -10 + rand() % 21;

            // Подсчет количества положительных элементов
            if (arr[i][j] > 0)
                count_positive++;
            // Подсчет количества отрицательных элементов
            else if (arr[i][j] < 0)
                count_negative++;
            // Подсчет количества нулевых элементов
            else
                count_zero++;
        }
    }

    // Вывод результата
    cout << "Количество положительных элементов: " << count_positive << endl;
    cout << "Количество отрицательных элементов: " << count_negative << endl;
    cout << "Количество нулевых элементов: " << count_zero << endl;

    return 0;
}