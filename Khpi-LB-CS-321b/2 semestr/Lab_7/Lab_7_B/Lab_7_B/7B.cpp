#include "7B.h"
void File_work1(int* mas1) {
	//������ � ������ 1
	FILE* f1;
	fopen_s(&f1, "f1.txt", "wb");
	if (f1 == NULL) {
		puts("������ ��� �������� �����");
		exit(0);
	}
	else {

		for (int i = 0;i < m;i++) {
			fprintf(f1, "%2d", *(mas1 + i));
			fprintf(f1, "\t");
		}
	}
	cout << "������ 1:" << endl;
	for (int i = 0; i < m; i++) {
		cout << *(mas1 + i) << "\t";
	}
	fclose(f1);
}