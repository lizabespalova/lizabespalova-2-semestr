﻿// 7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
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
	bool a =true;
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
			schetchik_surname = true;
			cout << "Заполните таблицу:" << endl;
			Screen(count,schet);
			count=1;
			
		}
		if (resp == 2) {
			cout << "Таблица заполнится случайным образом" << endl;
			Random(count,schet);
		     	schetchik_name = true;
				Print(count,schet);
				if (a) {
					count=1;
					schet++;
				}
				a = false;
		}
		if (resp == 3) {
			
				cout << "Таблица заполнится случайным образом" << endl;
				Random3(count, schet);
				schetchik_name = true;
					count++;
					schet++;
				
			}
		
		if (resp == 4) {
		
				cout << "Таблица заполнится случайным образом" << endl;
				Random4(count, schet);
				schetchik_name = true;
					count=1;
					schet++;
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