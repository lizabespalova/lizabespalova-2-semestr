#include "7.h"
void Function(int number) {
	FILE* f;
	int a, b, c,k;
	int min = 100;
	fopen_s(&f, "f.txt", "wb");
	if (f == NULL) {
		puts("Ошибка при открытии файла");
		exit(0);
	}
	else {
		cout << "Ваши числа" << endl;
		for (int i = 0; i < M; i++)
		{
			number = rand() % 20 + 1;
			fwrite(&number, sizeof(int), 1, f);
			cout << number << " " ;
			if (min>number) {
				min = number;
				k = i;
			}
		}
	}
	fclose(f);

	cout << endl;
	fopen_s(&f, "f.txt", "rb");
	if (f == NULL) {
		puts("Ошибка при открытии файла");
		exit(0);
	}
	else {
		fseek(f, 1*sizeof(int), SEEK_SET);
		fread(&a, sizeof(int), 1, f);
	}
	cout << "2 элемент файла:" << a<<endl;
	fclose(f);
	fopen_s(&f, "f.txt", "rb");
	if (f == NULL) {
		puts("Ошибка при открытии файла");
		exit(0);
	}
	else {
		fseek(f, 4 * sizeof(int), SEEK_SET);
		fread(&b, sizeof(int), 1, f);
	}
	cout << "5 элемент файла:" << b << endl;
	fclose(f);fopen_s(&f, "f.txt", "rb");
	if (f == NULL) {
		puts("Ошибка при открытии файла");
		exit(0);
	}
	else {
		fseek(f, 8 * sizeof(int), SEEK_SET);
		fread(&c, sizeof(int), 1, f);
	}
	cout << "9 элемент файла:" << c << endl;
	int sum = a + b + c;
	cout << "Сумма:" << sum << endl;
	fclose(f);
	cout << "Минимальный элемент файла:" << min << endl;
	fopen_s(&f, "f.txt", "rb");
	if (f == NULL) {
		puts("Ошибка при открытии файла");
		exit(0);
	}
	else {
		

		for (int i = 0; i < M; i++)
		{
			
			fread(&number, sizeof(int), 1, f);
			if (i == k) {
				number = 999;
			}
			cout << number << " ";
		}
	}
	fclose(f);
}