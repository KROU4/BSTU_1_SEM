#include<iostream>

using namespace std;

int main()
{ // ������� ������ �� 2 � 3
    //����� ���� ��������� ������ ��������������� �������� ������
    int N = 9;
    int * arr = new int[N];
    arr[0] = 24;
    arr[1] = 12;
    arr[2] = 18;
    arr[3] = 6;
    arr[4] = 36;
    arr[5] = 96;
    arr[6] = 54;
    arr[7] = 72;
    arr[8] = 48;


    //����������� ��� �� �����������
    for (int i = 0; i < N - 1; i++)
        for (int j = i + 1; j < N; j++)
            if (arr[i] > arr[j]) {
                int buff = arr[i];
                arr[i] = arr[j];
                arr[j] = buff;
            }

    //������� �������� �� ���������� ��� �� �������   
    for (int i = N - 1; i >= 0; i--) //�������� ������� � ������ �������� ����� � �������.
        for (int j = 0; j < i; j++) //��������� ��� ���������� �������� �� ���������� �������
            if (arr[i] % arr[j] != 0) { //���� �� ����������� ������� ��� ������� �� j
                for (int k = j; k < N - 1; k++)
                    arr[k] = arr[k + 1];//�� �������� �������� ������� � �������� j, ��������� �� ���.
                N--;//��������� ������ �������.
            }
    //������� ���������.
    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";

    delete[] arr;
    return 0;
}