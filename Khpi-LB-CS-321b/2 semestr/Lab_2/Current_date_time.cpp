 #pragma once
#include "Current_date_time.h"
#include "Struct.h"

void Screen(Data mm[M]) {
	
#ifdef DEBUG
	cout << "Текущая дата:" << __DATE__ << endl;
	cout << "Текущее время:" << __TIME__ << endl;
#endif
	int n = M; //количество элементов в массиве
	for (n = 0; n < M; n++)
	{
		printf("%d.Введите: фамилию, инициалы, год рождения, оклад>",
			n + 1);
		scanf_s("%s", mm[n].surname, sizeof(mm[n].surname));
		if (!strcmp(mm[n].surname, "***"))
			break;
		scanf_s("%s", &mm[n].initials, sizeof(mm[n].initials));
		scanf_s("%hd", &mm[n].birthdate);
		scanf_s("%f", &mm[n].salary);
	}
#ifdef DEBUG
	cout << "\n";
	cout << "Имя файла:" << __FILE__<<endl;
	cout << "Имя функции:" << __FUNCTION__ << endl;
#endif
}




void Random(Data mm[M]) {
	
#ifdef DEBUG
	cout << "Текущая дата:" << __DATE__ << endl;
	cout << "Текущее время:" << __TIME__ << endl;
#endif
	int n = M;
	Data inf;
	for (int n = 0; n < M; n++) {
		printf("%d. Ведите фамилию, инициалы >",
			n + 1);
		scanf_s("%s", mm[n].surname, sizeof(mm[n].surname));
		if (!strcmp(mm[n].surname, "***")) break;
		scanf_s("%s", &mm[n].initials, sizeof(mm[n].initials));
	}
	for (int i = 0; i < n;i++) {
		mm[i].birthdate = rand() % 20 + 1956;
		mm[i].salary = rand() % 219 + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (518)));;
	}
	mm[15] = mm[2];
	mm[2] = mm[0];
	mm[0] = mm[15];

#ifdef DEBUG
	cout << "\n";
	cout << "Имя файла:" << __FILE__ << endl;
	cout << "Имя функции:" << __FUNCTION__ << endl;
#endif
}
void Sort(Data mm[]) {
#ifdef DEBUG
	cout << "Текущая дата:" << __DATE__ << endl;
	cout << "Текущее время:" << __TIME__ << endl;
#endif
	Data inf;
	int n = M;
	int m;//индекс минимального элемента
	printf("-----------------------------------------------\n");
	printf("|                  Отдел кадров               |\n");
	printf("|---------------------------------------------|\n");
	printf("|  Фамилия  | Инициалы | Год рождения | Оклад |\n");
	printf("|---------------------------------------------|\n");
	for (int i = 0; i < n; i++)
		printf("|%-11s|%-10s|%-14hd|%-7.2f|\n",
			mm[i].surname, mm[i].initials, mm[i].birthdate, mm[i].salary);
	printf("|---------------------------------------------|\n");
	printf("|Приметка:  |---------------------------------|\n");
	printf("|оклад уста-|---------------------------------|\n");
	printf("|новлен на 1|---------------------------------|\n");
	printf("|января 2000|---------------------------------|\n");
	printf("|-----------|---------------------------------|\n");
	for (int i = 0; i < n - 1; i++) {
		m = i; /* минимальный элемент - первый */
		for (int j = i + 1; j < n; j++)

			if (strcmp(mm[m].surname, mm[j].surname) > 0) m = j;
		if (m > i) {

			inf = mm[i];
			mm[i] = mm[m];
			mm[m] = inf;
		}
	}
	
	printf("-----------------------------------------------\n");
	printf("|                  Отдел кадров               |\n");
	printf("|---------------------------------------------|\n");
	printf("|  Фамилия  | Инициалы | Год рождения | Оклад |\n");
	printf("|---------------------------------------------|\n");
	for (int i = 0; i < n; i++)
		printf("|%-11s|%-10s|%-14hd|%-7.2f|\n",
			mm[i].surname, mm[i].initials, mm[i].birthdate, mm[i].salary);
	printf("|---------------------------------------------|\n");
	printf("|Приметка:  |---------------------------------|\n");
	printf("|оклад уста-|---------------------------------|\n");
	printf("|новлен на 1|---------------------------------|\n");
	printf("|января 2000|---------------------------------|\n");
	printf("|-----------|---------------------------------|\n");
#ifdef DEBUG
	cout << "\n";
	cout << "Имя файла:" << __FILE__ << endl;
	cout << "Имя функции:" << __FUNCTION__ << endl;
#endif

}

void Print(Data mm[]) {
#ifdef DEBUG
	cout << "Текущая дата:" << __DATE__ << endl;
	cout << "Текущее время:" << __TIME__ << endl;
#endif

	int n = M; //количество элементов в массиве
	int i;// текущие индексы в массиве
	printf("-----------------------------------------------\n");
	printf("|                  Отдел кадров               |\n");
	printf("|---------------------------------------------|\n");
	printf("|  Фамилия  | Инициалы | Год рождения | Оклад |\n");
	printf("|---------------------------------------------|\n");
	for (int i = 0; i < n; i++)
		printf("|%-11s|%-10s|%-14hd|%-7.2f|\n",
			mm[i].surname, mm[i].initials, mm[i].birthdate, mm[i].salary);
	printf("|---------------------------------------------|\n");
	printf("|Приметка:  |---------------------------------|\n");
	printf("|оклад уста-|---------------------------------|\n");
	printf("|новлен на 1|---------------------------------|\n");
	printf("|января 2000|---------------------------------|\n");
	printf("|-----------|---------------------------------|\n");
#ifdef DEBUG
	cout << "\n";
	cout << "Имя файла:" << __FILE__ << endl;
	cout << "Имя функции:" << __FUNCTION__ << endl;
#endif
}
