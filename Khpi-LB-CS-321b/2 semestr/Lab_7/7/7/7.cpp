// 7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "7.h"
#include "struct7.h"
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	int count = 0;
	int schet = 0;
	bool schetchik_surname=false;
	bool schetchik_name=false;
	Data mm[100];
	while (true) {
		
		cout << "Выберите действие:" << endl;
		cout << "(1)Ввод с экрана и запись в файл" << endl;
		cout << "(2)Ввод случайно и запись в файл" << endl;
		cout << "(3)Добавить запись в конец файла" << endl;
		cout << "(4)Добавить запись в начало файла" << endl;
		cout << "(5)Печать одной из записи файла по номеру" << endl;
		cout << "(6)Чтение всех структур последовательно из файла и печать" << endl;
		cout << "(7)Выход" << endl;
		int resp = 0;
		cin >> resp;
		if (resp == 1) {
			cout << "Заполните таблицу:" << endl;
			Screen(count,schet);
			count++;
			schetchik_surname = true;
		}
		if (resp == 2) {
			cout << "Таблица заполнится случайным образом:" << endl;
			Random(count,schet);
			schetchik_name = true;
			cout << "Выберите операцию которую будем проводить:" << endl;
			cout << "(1)Сортировка" << endl;
			cout << "(2)Печать" << endl;
			int answer;
			cin >> answer;
			if (answer == 1)
			{
				Sort(count, schet);
				count++;
				schet++;
			}
			else if (answer == 2)
			{
				Print(count,schet);
				count++;
				schet++;
			}
		}
		if (resp == 3) {
			cout << "Выберите, как заполним:" << endl;
			cout << "(1)Ввод с экрана" << endl;
			cout << "(2)Ввод случайно" << endl;
			int respond = 0;
			cin >> respond;
			if (respond == 1) {
				cout << "Заполните таблицу:" << endl;
				Screen3(count, schet);
				count++;
				schetchik_surname = true;
			}
			else if (respond == 2) {
				cout << "Таблица заполнится случайным образом:" << endl;
				Random(count, schet);
				schetchik_name = true;

				cout << "Выберите операцию которую будем проводить:" << endl;
				cout << "(1)Сортировка" << endl;
				cout << "(2)Печать" << endl;
				int answ;
				cin >> answ;
				if (answ == 1) {
					Sort3(count, schet);
					count++;
					schet++;
				}
				else if (answ == 2) {
					Print3(count, schet);
					count++;
					schet++;
				}
			}
		}
		if (resp == 4) {
			cout << "Выберите, как заполним:" << endl;
			cout << "(1)Ввод с экрана" << endl;
			cout << "(2)Ввод случайно" << endl;
			int respond = 0;
			cin >> respond;
			if (respond == 1) {
				cout << "Заполните таблицу:" << endl;
				Screen4(count, schet);
				count++;
				schetchik_surname = true;
			}
			else if (respond == 2) {
				cout << "Таблица заполнится случайным образом:" << endl;
				Random(count, schet);
				schetchik_name = true;

				cout << "Выберите операцию которую будем проводить:" << endl;
				cout << "(1)Сортировка" << endl;
				cout << "(2)Печать" << endl;
				int answ;
				cin >> answ;
				if (answ == 1) {
					Sort4(count, schet);
					count++;
					schet++;
				}
				else if (answ == 2) {
					Print4(count, schet);
					count++;
					schet++;
				}
			}
		}
		if (resp == 5) {
			Print5(count, schetchik_name , schetchik_surname, schet);
		}
		if (resp == 6) {
			Print6(count, schetchik_name, schetchik_surname, schet);
		}
		if (resp == 7) {
			exit(0);
		}
	}
}



// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
//fopen_s(&f, "t.txt", "wb");
//	fseek(f, nomer * sizeof(int), SEEK_SET);
//char shelf1[500], shelf2[1000];
//int k, m;
//k = fread(shelf1, sizeof(char), 500, f);
//fclose(f);
//
//f = fopen("t.txt", "wb");
//m = fread(shelf2, sizeof(char), 1000, f);
//fclose(f);
//
//shelf1[k] = '\0';
//shelf2[m] = '\n';
//shelf2[m + 1] = '\0';
//
//f = fopen("t.txt", "wb");
//fwrite(strcat(shelf2, shelf1),
//	sizeof(char), k + m, f);
//fclose(f);
//
//for (int i = 0;i < n;i++) {
//	fread(&seek, sizeof(Data), 1, f);
//	/*fread(&mm[i].name, sizeof(Data), 1, f);
//	fread(&mm[i].initials, sizeof(Data), 1, f);
//	fread(&mm[i].init, sizeof(Data), 1, f);
//	fread(&mm[i].birthdate, sizeof(Data), 1, f);
//	fread(&mm[i].salary, sizeof(Data), 1, f);
//}
//
//int i;
//
//if (f == NULL) {
//	puts("Ошибка открытия файла");
//	exit(0);
//}
//
//else {
//	printf("-----------------------------------------------\n");
//	printf("|                  Отдел кадров               |\n");
//	printf("|---------------------------------------------|\n");
//	printf("|  Фамилия  | Инициалы | Год рождения | Оклад |\n");
//	printf("|---------------------------------------------|\n");
//	fprintf(f, "-----------------------------------------------\n");
//	fprintf(f, "|                  Отдел кадров               |\n");
//	fprintf(f, "|---------------------------------------------|\n");
//	fprintf(f, "|  Фамилия  | Инициалы | Год рождения | Оклад |\n");
//	fprintf(f, "|---------------------------------------------|\n");
//	for (int i = 0; i < n; i++) {
//		printf("|%c%-10d|%c%-9c|%-14hd|%-7.2f|\n",
//			mm[i].name, mm[i].numer, mm[i].in, mm[i].init, mm[i].birthdate, mm[i].salary);
//
//		fprintf(f, "|%c%-10d|%c%-9c|%-14hd|%-7.2f|\n",
//			mm[i].name, mm[i].numer, mm[i].in, mm[i].init, mm[i].birthdate, mm[i].salary);
//	}
//	printf("|---------------------------------------------|\n");
//	printf("|Приметка:  |---------------------------------|\n");
//	printf("|оклад уста-|---------------------------------|\n");
//	printf("|новлен на 1|---------------------------------|\n");
//	printf("|января 2000|---------------------------------|\n");
//	printf("|-----------|---------------------------------|\n");
//	fprintf(f, "|---------------------------------------------|\n");
//	fprintf(f, "|Приметка:  |---------------------------------|\n");
//	fprintf(f, "|оклад уста-|---------------------------------|\n");
//	fprintf(f, "|новлен на 1|---------------------------------|\n");
//	fprintf(f, "|января 2000|---------------------------------|\n");
//	fprintf(f, "|-----------|---------------------------------|\n");
//}
//
//fclose(f);
//#ifdef DEBUG
//cout << "\n";
//cout << "Имя файла:" << __FILE__ << endl;
//cout << "Имя функции:" << __FUNCTION__ << endl;
//#endif
//}