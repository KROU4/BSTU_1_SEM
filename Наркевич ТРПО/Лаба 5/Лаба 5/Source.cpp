#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int a;
	cout << "������� ����� ��������� �������: "; cin >> a;
	switch (a)
	{
	case 1: {
		char x1, x2;
		char xDiff[3];
		cout << "������� ���������� �������� �����: "; cin >> x1;
		cout << "������� ���������� ��������� �����: "; cin >> x2;
		_itoa_s(int(x1 - x2), xDiff, 16);
		cout << "������� � 10 �������: " << x1 - x2 << endl;
		cout << "������� � 16 �������: " << xDiff << endl << endl;
		break; }
	case 2: {
		char y1, y2;
		char yDiff[3];
		cout << "������� ������� �������� �����: "; cin >> y1;
		cout << "������� ������� ��������� �����: "; cin >> y2;
		_itoa_s(int(y1 - y2), yDiff, 16);
		cout << "������� � 10 �������: " << y1 - y2 << endl;
		cout << "������� � 16 �������: " << yDiff << endl << endl;
		break; }
	case 3: {
		int count;
		cout << "������� �����: "; cin >> count;
		char symb = count;
		cout << "���� ����� ����������������, �������� ������� ASCII: " << symb << endl;
		cout << endl;
		cout << "���� ����� � ����������������� ������� ���������: " << hex << count << endl;
		break; }

	default:
		cout << "������� �������������� ��������!" << endl;
		break;
	}


}