#include <iostream>
int main()
{
	using namespace std;
	setlocale(LC_ALL, "rus");
	int n1, n2;
	float f;
	cout << "Enter n1 arr_1: ";
	cin >> n1;
	cout << "Enter n2 arr_2: ";
	cin >> n2;
	cin >> f;
	cout << endl << "Enter arr $: " << endl;
	float* $ = new float[n1];
	for (int i = 0; i < n1; i++)
	{
		cin >> $[i];
	}
	cout << endl << "Enter arr 0: " << endl;
	float* D = new float[n2];
	for (int j = 0; j < n2; j++)
	{
		cin >> D[j];
	}
	float delta = abs(f - round(($)[0] + D[0]));
	float temp_num1 = $[0], temp_num2 = D[0];
	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < n2; j++) {
			if (delta == 0) {
				delta = abs(f - round($[i] + D[j]));
				temp_num1 = $[i];
				temp_num2 = $[j];
			}
			if (abs(f - round($[i] + D[j])) < delta) {
				delta = abs(f - round($[i] + D[j]));
				temp_num1 = $[i];
				temp_num2 = $[j];
			}
			if (delta == 0) {
				cout << temp_num1 << "+" << temp_num2 << "=" << f << endl;
			}

			cout << temp_num1 << "+" << temp_num2 << "-" << f << endl;
		}
		return 0;



	}
}