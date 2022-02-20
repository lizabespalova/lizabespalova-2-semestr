#include "Array.h"
int Array(int* pArr_A, int M, bool a) {
	srand(time(NULL));
	if (a == true) {
		cout << "Ваш массив:" << endl;
	}
		for (int i = 0; i < M; i++) {
			*pArr_A = rand() % 20 - 10;
			if (a == false) {
				pArr_A++;
			}
			if (a == true) {
				cout << *pArr_A << setw(4);
				pArr_A++;
			}
	}
	return  pArr_A, M;
}
void Negative_numbers(int* pArr_A, int M) {
	 int* pArr_A_start = pArr_A;
	int k = 0;
	for (pArr_A  = pArr_A_start; pArr_A < pArr_A_start + M;++pArr_A)
	{
		if (*pArr_A < 0) k++;
		
	}
	cout << endl;
	cout << "Количество отрицательных элементов:" <<k;
	
	int* pArr_B = new int[k];
	// Запоминание начала массива В
	int* pArr_B_start = pArr_B;
	for (pArr_A = pArr_A_start; pArr_A < pArr_A_start + M; ++pArr_A)
	{
		if (*pArr_A < 0)
		{
			// Копирование отрицательного элемента с А в В
			*pArr_B = *pArr_A;
			pArr_B++;
		}
	}
	cout << endl;
	cout << "Переписанный массив с отрицательными элементами: \n";
	pArr_B = pArr_B_start;
	for (int i = 0; i < k; i++)
	{
		cout<< *pArr_B << setw(4);
		pArr_B++;
	}
	//Указатель на начало массива
	pArr_A = pArr_A_start;
	pArr_B = pArr_B_start;
	delete[] pArr_B;
}




void Replacement(int* pArr_A, int M) {
	//относительный адрес
	cout << endl;
	cout << "Максимальный элемент:" << endl;
	int max = *pArr_A;
	for (int i = 0; i < M;i++) {
		if (max < *(pArr_A + i)) {
			max = *(pArr_A + i);
		}
	}
	cout << max << endl;
	cout << "Замена положительных чисел массива на значение максимального элемента:" << endl;
	for (int i = 0; i < M; i++) {
		if (*(pArr_A + i) >= 0) {
			*(pArr_A + i) = max;
		}
		cout << *(pArr_A + i) << setw(4);
	}
	
}
