#include <iostream>
using namespace std;

int func1()
{
	char x1, x2;
	char xDiff[3];
	cout << "������� ���������� �������� �����: "; cin >> x1;
	cout << "������� ���������� ��������� �����: "; cin >> x2;
	if (x1 > 'a' && x1 < 'z' || x2 > 'A' && x2 < 'Z')
	{
		_itoa_s(int(x1 - x2), xDiff, 16);
		cout << "������� � 10 �������: " << x1 - x2 << endl;
		cout << "������� � 16 �������: " << xDiff << endl << endl;
	}
	else
	{
		cout << "\n������� ���������� ������!" << endl;
	}
	return 0;
}
int func2() {
	char y1, y2;
	char yDiff[3];
	cout << "������� ������� �������� �����: "; cin >> y1;
	cout << "������� ������� ��������� �����: "; cin >> y2;

	if (y1 > '�' && y1 < '�' && y2 > '�' && y2 < '�')
	{
		_itoa_s(int(y1 - y2), yDiff, 16);
		cout << "������� � 10 �������: " << y1 - y2 << endl;
		cout << "������� � 16 �������: " << yDiff << endl << endl;
	}
	else
	{
		cout << "������� ���������� ������!" << endl;
	}
	return 0;
}
int func3() {
	int count;
	cout << "������� �����: "; cin >> count;
	char symb = count;
	if (count < 0 && count > 255)
	{
		cout << "������� ���������� �����!" << endl;
	}
	else
	{
		cout << "���� ����� ����������������, �������� ������� ASCII: " << symb << endl;
		cout << endl;
		cout << "���� ����� � ����������������� ������� ���������: " << hex << count << endl;
	}
	return 0;
}
int func4() {
	return 0;
}

int main()
{
	setlocale(LC_ALL, "ru");
	int a;
	cout << "�������� ���� �� ���������:\n1 � ����������� ������� �������� ����� � Windows-1251 ����� ���������� �������� � ��������� � �������� ���������; \n2 � ����������� ������� �������� ����� � Windows-1251 ����� �������� �������� � ��������� � �������� ���������; \n3 � ����� � ������� ���� �������, ���������������� ��������� �����. \n4 - ����� �� ��������� \n\n"; cin >> a;
	switch (a) {
		
	case (1): func1();
		break;
		

		
	case (2): func2();
		break;
		

		
	case (3): func3();
		break;
		

		
	case (4): func4();
		break;
		
		
	default: {
		cout << "������� �������������� ��������!" << endl;
		break;
	}
	}
}
