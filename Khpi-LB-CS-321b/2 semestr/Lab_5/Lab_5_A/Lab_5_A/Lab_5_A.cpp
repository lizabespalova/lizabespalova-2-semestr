﻿// Lab_5_A.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "5A.h"
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	int N;
	cout << "На сколько элементов создадим массив?" << endl;
	cin >> N;
	int** A  = new int* [N];
	int* min = new int[N];
	int* max = new int[N];
	int* result = new int[2];
	int sum= 0;
	long int proizv = 1;
	Fill(A, N);
	*result=Function(A, min, max, result,&sum, &proizv,N);
	cout << endl;
	cout << "Ваш конечный массив" << endl;
	for (int i = 0; i < 2; i++) {
		cout  << *(result + i);
		cout << "\t";
	}
	delete[]A;
	delete[]min;
	delete[]max;
	delete[]result;
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
