#include <iostream>
//VelutichDmitry2005
// Windows-1251 >> 56 65 6c 75 74 69 63 68 44 6d 69 74 72 79 32 30 30 35
// в UTF-8 >> 56 65 6c 75 74 69 63 68 44 6d 69 74 72 79 32 30 30 35
// в UTF-16 >> 56 00 65 00 6c 00 75 00 74 00 69 00 63 00 68 00 44 00 6d 00 69 00 74 00 72 00 79 00 32 00 30 00 30 00 35 00

//ВелютичДмитрий2005
// Windows-1251 >> c2 e5 eb fe f2 e8 f7 c4 ec e8 f2 f0 e8 e9 32 30 30 35 00
// в UTF-8 >> d0 92 d0 b5 d0 bb d1 8e d1 82 d0 b8 d1 87 d0 94 d0 bc d0 b8 d1 82 d1 80 d0 b8 d0 b9 32 30 30 35
// в UTF-16 >> 12 04 35 04 3b 04 4e 04 42 04 38 04 47 04 14 04 3c 04 38 04 42 04 40 04 38 04 39 04 32 00 30 00 30 00 35 00

//Велютич2005Dmitry
// Windows-1251 >> c2 e5 eb fe f2 e8 f7 32 30 30 35 44 6d 69 74 72 79 00
// в UTF-8 >> d0 92 d0 b5 d0 bb d1 8e d1 82 d0 b8 d1 87 32 30 30 35 44 6d 69 74 72 79
// в UTF-16 >> 12 04 35 04 3b 04 4e 04 42 04 38 04 47 04 32 00 30 00 30 00 35 00 44 00 6d 00 69 00 74 00 72 00 79 00

int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int number = 0x12345678;
	char hello[] = "Hello, ";
	char lfie[] = "VelutichDmitry2005";
	char rfie[] = "ВелютичДмитрий2005";
	char lr[] = "Велютич2005Dmitry";

	wchar_t Lfie[] = L"VelutichDmitry2005";
	wchar_t Rfie[] = L"ВелютичДмитрий2005";
	wchar_t LR[] = L"Велютич2005Dmitry";
	cout << hello << lr << endl;
	return(0);

}