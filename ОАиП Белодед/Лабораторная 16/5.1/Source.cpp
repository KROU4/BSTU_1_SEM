//Дан двумерный массив.  В каждой строке выбрать минимальный элемент и среди них максимальный.  Напечатать номер строки, в которой расположен этот элемент.    
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    const int n = 5; // количество строк
    const int m = 6; // количество столбцов 

    // Создание двумерного массива
    int array[n][m];

    srand(time(0)); // инициализация генератора случайных чисел

    // Заполнение массива случайными числами
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            array[i][j] = rand() % 1000;
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }

    // Определение минимального элемента в каждой строке массива
    int min = array[0][0];
    int row_index = 0; // индекс строки с минимальным элементом
    for (int i = 0; i < n; i++)
    {
        min = array[i][0];
        for (int j = 0; j < m; j++)
        {
            if (array[i][j] < min)
            {
                min = array[i][j];
                row_index = i;
            }
        }
    }

    // Определение максимального элемента среди минимальных элементов в строках массива
    int max = array[0][0];
    for (int i = 0; i < n; i++)
    {
        if (array[i][0] > max)
        {
            max = array[i][0];
            row_index = i;
        }
    }

    // Вывод результата
    cout << "Номер строки, в которой расположен максимальный элемент среди минимальных элементов в строках массива: " << row_index << endl;

    return 0;
}