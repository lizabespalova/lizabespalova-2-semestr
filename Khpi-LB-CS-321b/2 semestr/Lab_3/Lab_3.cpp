﻿// Lab_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "Array.h"

int main() 
{
	while (true) {
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);
		const int size = 10000;
		int  pArr_A[size];
		int pArr_B[size];
		int M;
		cout << endl;
		cout << "Введите количество элементов массива(до 10000):" << endl;
		cin >> M;

		Array(pArr_A, M, 1);
# ifdef SOLVE
		Negative_numbers(pArr_A, M, pArr_B);
#endif 
# ifdef DEBUG
		Replacement(pArr_A, M);
#endif 
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
