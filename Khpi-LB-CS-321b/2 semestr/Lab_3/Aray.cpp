#include "Array.h"
int Array(int* pArr_A, int size, bool a) {
	srand(time(NULL));
	if (a == true) {
		cout << "��� ������:" << endl;
	}
		for (int i = 0; i < size; i++) {
			*pArr_A = rand() % 20 - 10;
			if (a == false) {
				pArr_A++;
			}
			if (a == true) {
				cout << *pArr_A << setw(4);
				pArr_A++;
			}
	}
	return  pArr_A, size;
}
void Negative_numbers(int* pArr_A, int size) {
	//���������� �����
	 // ����������� ������ ������� �
	 int* pArr_A_start = pArr_A;
	int k = 0;
	for (pArr_A  = pArr_A_start; pArr_A < pArr_A_start + size;++pArr_A)
	{
		if (*pArr_A < 0) k++;
		
	}
	cout << endl;
	cout << "���������� ������������� ���������:" <<k;
	
	int* pArr_B = new int[k];
	// ����������� ������ ������� �
	int* pArr_B_start = pArr_B;
	for (pArr_A = pArr_A_start; pArr_A < pArr_A_start + size; ++pArr_A)
	{
		if (*pArr_A < 0)
		{
			// ����������� �������������� �������� � � � �
			*pArr_B = *pArr_A;
			pArr_B++;
		}
	}
	cout << endl;
	cout << "������������ ������ � �������������� ����������: \n";
	pArr_B = pArr_B_start;
	for (int i = 0; i < k; i++)
	{
		cout<< *pArr_B << setw(4);
		pArr_B++;
	}
	//��������� �� ������ �������
	pArr_A = pArr_A_start;
	pArr_B = pArr_B_start;
	delete[] pArr_B;
}




void Replacement(int* pArr_A, int size) {
	//������������� �����
	cout << endl;
	cout << "������������ �������:" << endl;
	int max = *pArr_A;
	for (int i = 0; i < size;i++) {
		if (max < *(pArr_A + i)) {
			max = *(pArr_A + i);
		}
	}
	cout << max << endl;
	cout << "������ ������������� ����� ������� �� �������� ������������� ��������:" << endl;
	for (int i = 0; i < size; i++) {
		if (*(pArr_A + i) >= 0) {
			*(pArr_A + i) = max;
		}
		cout << *(pArr_A + i) << setw(4);
	}
	delete[]pArr_A;
}
