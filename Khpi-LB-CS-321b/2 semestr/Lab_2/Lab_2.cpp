﻿// Lab_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "Current_date_time.h"
#include "Struct.h"
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Data mm[10];
   	while (true) {
		
#if PRINT_TYPE == 1
		cout << "Заполните таблицу:" << endl;
		Screen(mm);
#elif  PRINT_TYPE == 2
		cout << "Введите имя и инициалы, дальше таблица заполнится случайным образом:" << endl;
		Random(mm);

#endif
		cout << "Выберите операцию которую будем проводить:" << endl;
		cout << "(1)Сортировка" << endl;
		cout << "(2)Печать" << endl;
		int answer;
		cin >> answer;
		if (answer == 1)
		{
			Sort(mm);
		}
		else if (answer == 2)
		{
			Print(mm);
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
