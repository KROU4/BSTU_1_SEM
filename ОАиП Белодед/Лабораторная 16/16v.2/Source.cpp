//Определить самое короткое и самое длинное слово в строке.
#include <iostream>
#include <string> 
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    string str; // строка, в которой будем искать максимальное и минимальное слово
    cout << "Введите строку: ";
    getline(cin, str);

    int max_word_length = 0; // длина самого длинного слова
    int min_word_length = INT32_MAX; // длина самого короткого слова
    string max_word; // самое длинное слово
    string min_word; // самое короткое слово

    string cur_word; // текущее слово
    for (int i = 0; i < str.length(); i++)
    {
        // если текущий символ - буква
        if (isalpha(str[i]))
        {
            // добавляем ее в текущее слово
            cur_word += str[i];
        }
        else
        {
            // если дошли до конца слова
            if (!cur_word.empty())
            {
                // если длина текущего слова больше длины самого длинного слова
                if (cur_word.length() > max_word_length)
                {
                    // запоминаем длину самого длинного слова
                    max_word_length = cur_word.length();
                    // запоминаем самое длинное слово
                    max_word = cur_word;
                }

                // если длина текущего слова меньше длины самого короткого слова
                if (cur_word.length() < min_word_length)
                {
                    // запоминаем длину самого короткого слова
                    min_word_length = cur_word.length();
                    // запоминаем самое короткое слово
                    min_word = cur_word;
                }

                cur_word.clear(); // очищаем текущее слово
            }
        }
    }

    // если последний символ был буквой
    if (!cur_word.empty())
    {
        // если длина текущего слова больше длины самого длинного слова
        if (cur_word.length() > max_word_length)
        {
            // запоминаем длину самого длинного слова
            max_word_length = cur_word.length();
            // запоминаем самое длинное слово
            max_word = cur_word;
        }

        // если длина текущего слова меньше длины самого короткого слова
        if (cur_word.length() < min_word_length)
        {
            // запоминаем длину самого короткого слова
            min_word_length = cur_word.length();
            // запоминаем самое короткое слово
            min_word = cur_word;
        }
    }

    // выводим результаты
    cout << "Самое длинное слово: \"" << max_word << "\"" << endl;
    cout << "Длина самого длинного слова: " << max_word_length << endl;
    cout << "Самое короткое слово: \"" << min_word << "\"" << endl;
    cout << "Длина самого короткого слова: " << min_word_length << endl;

    return 0;
}