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

int *B(int* A, int size, int count) {
	
	cout << endl;
	cout << "������������� ������:" << endl;
	
	int nul = 0;
	int* b = new int[count];

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
		cout << "������������� �������� � ������� ���" << endl;
	}
	return b;
}
int *C(int* A, int size, int razm) {
	
		cout << endl;
		 cout << "������������� ������:" << endl; 
	
		
	int* c = new int[razm];
	razm = 0;
	int nul = 0;
	for (int i = 0; i < size; i++) {
		if (*(A + i) > 0) {
			*(c + razm) = *(A + i);
			nul++;
			{ cout << *(c + razm) << setw(4); }
			razm++;
		}
	}
	if (nul == 0) {
		cout << "������������� ��������  � ������� ���" << endl;
	}
	return c;
}
int* D(int* A, int size, int razmer) {
	
		cout << endl;
		 cout << "������� ������:" << endl; 
	
	
	int* d = new int[razmer];
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
		{ cout << "����� � ������� ���" << endl; }
	}
	return d;
}
