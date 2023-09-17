#include <iostream>
#include <string>
   using namespace std;

void task1() {//3 DOP
	setlocale(LC_ALL, "rus");
	string str[] = { "Дима ", "Вова ", "Лёша ", "Дима ", "Вован ", "Настя ", "Таня ", "Дима " };
	for (int i = 7; i >= 0; i--)
	{
		for (int k = 0; k < i; k++)
		{
			if (str[i] == str[k])
				str[k].erase();
		}
	}


	for (int i = 0; i < 8; i++)
	{
		for (int k = 0; k < str[i].size(); k++)
		{
			cout << str[i][k];
		}
	}
}
void task2() {//4 DOP
	setlocale(0, "");
	char A[] = "HOW DO YOU DO";
	int word = 0, letter = 0;
	char A1[25];
	for (int i = 0, letterNum = 0; i < strlen(A); i += letter + 1, letter = 0) {
		for (int j = i; ; j++) {
			letter++;
			if (A[j + 1] == ' ' || A[j + 1] == '\0') {
				word++;
				break;
			}
		}
		if (word % 2 == 1)
			continue;
		else
			for (int j = i + letter - 1; j >= i; j--, letterNum++) {
				A1[letterNum] = A[j];
				if (letter - 1 == letterNum)
					A1[++letterNum] = ' ';
			}
		if (word == 4) {
			A1[letterNum] = '\0';
		}
	}
	cout << A1;

}

int main()
{
	task2();
	return 0;
}