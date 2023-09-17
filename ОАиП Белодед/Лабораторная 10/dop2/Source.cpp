#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <iterator>
#include <iostream>
using namespace std;

class Random {
public:
    Random(int min, int max)
        : min(min)
        , max(max) {
        srand(time(NULL));
    }

    int operator()() {
        return min + rand() % (max - min);
    }
private:
    int min;
    int max;
};

int main() {
    setlocale(LC_ALL, "RUS");
    const size_t size = 200;
    int    arr[size];
    const int    min = -50;
    const int    max = 50;

    generate(arr, arr + size, Random(min, max + 1));

    int pair_count = 0;
    for (size_t i = 1; i < size; ++i)
        if (arr[i - 1] == arr[i])
            ++pair_count;

    cout << "Массив: " << endl;
    copy(arr, arr + size, ostream_iterator<int>(cout, " "));
    cout << endl;

    cout << "Количество пар: " << pair_count << endl;

    return 0;
}