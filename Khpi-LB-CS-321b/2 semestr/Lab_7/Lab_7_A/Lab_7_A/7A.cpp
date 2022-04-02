#include "7A.h"

void File_work1(int*mas1) {
	//работа с файл 1
	FILE* f1;
	fopen_s(&f1, "f1.txt", "wb");
	if (f1 == NULL) {
		puts("Ошибка при открытии файла");
		exit(0);
	}
	else {
		
	for (int i = 0;i < m;i++) {
		fprintf(f1, "%2d",* (mas1+i));
		fprintf(f1,"\t");
	}
}
	cout << "Массив 1:" << endl;
	for (int i = 0; i < m; i++) {
		cout << *(mas1 + i) << "\t";
		}
	fclose(f1);
	
}
void File_work2(int* mas1, int* mas2) {
	//записываем в файл 2
	cout << endl;
	cout << "Массив 2:" << endl;
	FILE* f1;
	FILE* f2;
	fopen_s(&f1, "f1.txt", "rb");
	fopen_s(&f2, "f2.txt", "wb");
	if (f2 == NULL) {
		puts("Ошибка при открытии файла");
		exit(0);
	}
	if (f1 == NULL) {
		puts("Ошибка при открытии файла");
		exit(0);
	}
	else {
			for (int i = 0; i < m;i++) {
				fread(&*(mas2+i), sizeof(int),m, f1);
		}
			fwrite(mas2, sizeof(int)-1, m, f2);	
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
	//через х
	cout << endl;
	FILE* f2;
	int x;
	cout << "Вывод через x:" << endl;
	fopen_s(&f2, "f2.txt", "rb");
	if (f2 == NULL) {
		puts("Ошибка при открытии файла");
		exit(0);
	}
	else {
		fprintf(f2, "\n");
		for (int i = 0; i < m; i++) {
			fscanf_s(f2, "%2d", &x);
			fprintf(f2, "%d", x);
			cout << x <<"\t";
		}
	}
	fclose(f2);
}