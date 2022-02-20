﻿// Lab_3_b.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include "Massiv.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int size = 0;
	cout << "Введите количество элементов массива:" << endl;
	cin >> size;
	srand(time(NULL));
	int* A = new int[size];
	cout << "Ваш массив:" << endl;
	for (int i = 0; i < size; i++)
	{
		*(A + i) = rand() % 20 - 10;
		cout << *(A + i) << setw(4);
	}
	int count = bcount(A, size);
	int razm = crazm(A, size);
	int razmer = drazmer(A, size);
	int* b = new int[count];
	int* c = new int[razm];
	int* d = new int[razmer];
    B(A, b, size, count);
    C(A, c, size, razm);
    D(A, d, size, razmer);
	cout << endl;
	cout <<"Переписанный массив"<< endl;
	for (int i = 0; i < razmer; i++) {
		*(A + i) = *(d + i);
	}
	delete[]d;
	for (int i = razmer, j=0; i<count,j < count;i++, j++) {
		
			*(A + i) = *(b + j);
		
	}
	delete[]b;
	for (int i = razmer+count, j=0; i<razm,j < razm;i++, j++) {
		
			*(A + i) = *(c + j);
		
	}
	delete[]c;
	for (int i = 0;i < size;i++) {
		cout << *(A + i) << setw(4);
	}
	delete[]A;
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
