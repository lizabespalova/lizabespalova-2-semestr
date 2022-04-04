#include "7B.h"
void File_work1(int* mas1) {
	//работа с файлом 1
	
	FILE* f1;
	fopen_s(&f1, "f1.txt", "wb");
	if (f1 == NULL) {
		puts("Ошибка при открытии файла");
		exit(0);
	}
	else {
		for (int i = 0;i < m;i++) {
			fwrite(mas1, sizeof(*mas1), m, f1);
			
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
	fopen_s(&f1, "f1.txt", "wb");
	if (f1 == NULL) {
		puts("Ошибка при открытии файла");
		exit(0);
	}
	else {
		fwrite(mas1, sizeof(*mas1), m, f1);	
	}
		fclose(f1);
		fopen_s(&f1, "f1.txt", "rb");
		if (f1 == NULL) {
			puts("Ошибка при открытии файла");
			exit(0);
		}
		else {
			
			for (int i = 0; i < m;i++) {
				fread(&*(mas2 + i), sizeof(int), m, f1);
				cout << *(mas2 + i) << "\t";
			}
	}
	fclose(f1);
}
void File_work3(int* mas2, int *sum) {
	//сумма
	FILE* f1;
	fopen_s(&f1, "f1.txt", "wb");
	if (f1 == NULL) {
		puts("Ошибка при открытии файла");
		exit(0);
	}
	else {
		fwrite(mas2, sizeof(*mas2), m, f1);
	}
	fclose(f1);
	fopen_s(&f1, "f1.txt", "wb");
	if (f1 == NULL) {
		puts("Ошибка при открытии файла");
		exit(0);
	}
	else {

		for (int i = 0; i < m;i++) {
			fread(&*(mas2 + i), sizeof(int), m, f1);
			if (*(mas2+i)>0) {
				*sum += *(mas2+i);
			}
		}
		cout << endl;
		cout << "Ваша сумма:" << endl;
		cout << *sum << endl;
	}
	fclose(f1);
}