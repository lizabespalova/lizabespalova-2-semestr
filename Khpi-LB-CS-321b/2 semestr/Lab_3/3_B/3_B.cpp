﻿// 3_B.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "Array_work.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int size = 0;
	cout << "Введите количество элементов массива:" << endl;
	cin >> size;
		srand(time(NULL));
		int* arr = new int[size];
		cout << "Ваш массив:" << endl;
		for (int i = 0; i < size; i++)
		{
			*(arr + i) = rand() % 20 - 10;
			cout << *(arr + i) << setw(4);
		}

		int count= b(arr,size);
		int razm= c (arr, size);
		int razmer= d(arr, size);


	for (int i = 0; i < razmer; i++) {
		*(arr + i) = *(d + i);
	}
	for (int i = razmer; i < razmer+count; i++) {
		*(arr + i) = *(c + i);
	}for (int i = razmer + count; i < razmer+razm+count; i++) {
		*(arr + i) = * (b+ i);
	}
	for (int i = 0; i < size; i++) {
		cout << *(arr + i) << setw(4);
	}
	return 0;
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
