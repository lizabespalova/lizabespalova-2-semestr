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

void B(int* A,int*b, int size, int count, bool vivod) {
	if (vivod == true) {
		cout << endl;
		cout << "������������� ������:" << endl;
	}
	int nul = 0;
	count = 0;
	for (int i = 0; i < size; i++) {
		if (*(A + i) < 0) {
			*(b + count) = *(A + i);
			nul++;
			{ 
				if (vivod == true) {
					cout << *(b + count) << setw(4);
				}
			}
			count++;
		}
	}
	if (vivod == 0 && nul == 0) {
		cout << "������������� �������� � ������� ���" << endl;
	}

}
void C(int* A, int* c, int size, int razm, bool vivod) {
	if (vivod == true) {
		cout << endl;
		cout << "������������� ������:" << endl;
	}
	int nul = 0;
	razm = 0;
	for (int i = 0; i < size; i++) {
		if (*(A + i) > 0) {
			*(c + razm) = *(A + i);
			nul++;
			if (vivod == true) {
				cout << *(c + razm) << setw(4);
			}
			razm++;
		}
		if (vivod == true&& nul == 0) {
			
				cout << "������������� ��������  � ������� ���" << endl;
			
		}
	}
}
	
	void D(int* A, int* d, int size, int razmer, bool vivod) {
		if (vivod == true) {
			cout << endl;
			cout << "������� ������:" << endl;
		}
		razmer = 0;
		int nul = 0;
		for (int i = 0; i < size; i++) {
			if (*(A + i) == 0) {
				*(d + razmer) = *(A + i);
				nul++;
				if (vivod == true) {
					cout << *(d + razmer) << setw(4);
				}
				razmer++;
			}

		}
		if (vivod == true && nul == 0) {
			
				cout << "����� � ������� ���" << endl;
			
		}
	}


		