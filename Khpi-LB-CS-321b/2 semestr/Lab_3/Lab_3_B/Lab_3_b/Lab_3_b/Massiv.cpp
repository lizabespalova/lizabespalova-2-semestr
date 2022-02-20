#include "Massiv.h"
int bcount(int *A, int size) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (*(A + i) < 0) {
			count++;
		}
	}
	return count;
}
int crazm(int* A, int size) {
	int razm = 0;
	for (int i = 0; i < size; i++) {
		if (*(A + i) > 0) {
			razm++;
		}
	}
	return razm;
}
int drazmer(int* A, int size) {
	int razmer = 0;
	for (int i = 0; i < size; i++) {
		if (*(A + i) == 0) {
			razmer++;
		}
	}
	return razmer;
}

void B(int* A,int*b, int size, int count) {
	
	cout << endl;
	cout << "Отрицательный массив:" << endl;
	
	int nul = 0;

	count = 0;
	for (int i = 0; i < size; i++) {
		if (*(A + i) < 0) {
			*(b + count) = *(A + i);
			nul++;
			{ 
				cout << *(b + count) << setw(4);
			}
			count++;
		}
	}
	if (nul == 0) {
		cout << "Отрицательных значений в массиве нет" << endl;
	}

}
void C(int* A,int*c, int size, int razm) {
	
		cout << endl;
		 cout << "Положительный массив:" << endl; 
	int nul = 0;
	razm = 0;
	for (int i = 0; i < size; i++) {
		if (*(A + i) > 0) {
			*(c + razm) = *(A + i);
			nul++;
			{ cout << *(c + razm) << setw(4); }
			razm++;
		}
	}
	if (nul == 0) {
		cout << "Положительных значений  в массиве нет" << endl;
	}

}
void D(int* A,int*d, int size, int razmer) {
	
		cout << endl;
		 cout << "Нулевой массив:" << endl; 
	razmer = 0;
	int nul = 0;
	for (int i = 0; i < size; i++) {
		if (*(A + i) == 0) {
			*(d + razmer) = *(A + i);
			nul++;
			cout << *(d + razmer) << setw(4);
			razmer++;
		}

	}
	if (nul == 0) {
		{ cout << "Нулей в массиве нет" << endl; }
	}

}
