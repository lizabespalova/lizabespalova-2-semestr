#include "7A.h"

void File_work1(int*mas1) {
	//������ � ������ 1
	FILE* f1;
	fopen_s(&f1, "f1.txt", "w");
	if (f1 == NULL) {
		puts("������ ��� �������� �����");
		exit(0);
	}
	else {
		
	for (int i = 0;i < m;i++) {
		fprintf(f1, "%2d",* (mas1+i));
		fprintf(f1,"\t");
	}
}
	cout << "������ 1:" << endl;
	for (int i = 0; i < m; i++) {
		cout << *(mas1 + i) << "\t";
		}
	fclose(f1);
	
}
void File_work2(int* mas1, int* mas2) {
	//���������� � ���� 2
	cout << endl;
	cout << "������ 2:" << endl;
	FILE* f1;
	FILE* f2;
	fopen_s(&f1, "f1.txt", "r");
	fopen_s(&f2, "f2.txt", "w");
	if (f2 == NULL) {
		puts("������ ��� �������� �����");
		exit(0);
	}
	if (f1 == NULL) {
		puts("������ ��� �������� �����");
		exit(0);
	}
	else {
			for (int i = 0; i < m;i++) {
			
				fscanf_s(f1, "%2d", &*(mas2 + i));
				fprintf(f2, "%2d", *(mas2 + i));
				fprintf(f2, "\t");
		}
			
			rewind(f1);
			for (int i = 0; i < m;i++) {
				fscanf_s(f1, "%2d", &*(mas2 + i));
				cout << *(mas2 + i) << "\t";
			}
	}
	fclose(f1);
	fclose(f2);
}
void File_work3(int*mas1,int* mas2) {
	//����� �
	cout << endl;
	FILE* f2;
	int x;
	cout << "����� ����� x:" << endl;
	fopen_s(&f2, "f2.txt", "r");
	if (f2 == NULL) {
		puts("������ ��� �������� �����");
		exit(0);
	}
	else {
		fprintf(f2, "\n");
		for (int i = 0; i < m; i++) {
			fscanf_s(f2, "%d", &x);
			fprintf(f2, "%d", x);
			cout << x <<"\t";
		}
	}
	fclose(f2);
}