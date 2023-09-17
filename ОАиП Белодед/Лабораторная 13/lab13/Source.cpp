#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
int main(int argc, char* argv[])
{
    SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
    setlocale(LC_ALL, "rus");
    size_t n;
    string St, S;
    cout << "¬ведите St : ";
    getline(cin, St, '\n');
    cout << "¬ведите S : ";
    getline(cin, S, '\n');
    cout << "¬ведите позицию (n2):";
    while (!(cin >> n) || n >= S.size()) {
        cerr << "ќшибка " << endl;
        return EXIT_FAILURE;
    }
    S.insert(n, St);
    cout << S << endl;
    return 0;
}
