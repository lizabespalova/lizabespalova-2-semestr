﻿// Lab_5_V.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include "5V.h"
int main()
{
	setlocale(LC_ALL,"ru");
	while (true) {
		int N;
		void(*p)(int *A, int N);//Огласили указатель на функцию
		cout << endl;
		cout << "На сколько элементов создадим массив?" << endl;
		cin >> N;
		int* A = new int[N];
		 Fill(A, N);
		cout << "Ваш массив:" << endl;
		for (int i = 0; i < N;i++) {
			cout << setw(4) << *(A + i);
		}
		cout << endl;
		cout << "Выберите какой сортировкой хотите пользоваться:" << endl;
		cout << "(1) Пузырьком" << endl;
		cout << "(2) Хоара" << endl;
		cout << "(3) Гномья" << endl;
		cout << "(4) Выход" << endl;
		int answer;
		cin >> answer;
		if (answer == 1) {
			p = Pysirok; p( A,  N);
		  /* Function(A, N, p);*/
			for (int i = 0; i < N;i++) {
				cout << setw(4) << *(A + i);
			}
			cout << endl;
		}
		else if (answer == 2) {
			p=Choara; p(A, N);
		/*	Function(A, N, p);*/
			for (int i = 0; i < N;i++) {
				cout << setw(4) << *(A + i);
			}
			cout << endl;
		}
		else if (answer == 3) {
			p=Gnom; p(A, N);
		/*	Function(A, N, p);*/
			for (int i = 0; i < N;i++) {
				cout << setw(4) << *(A + i);
			}
			cout << endl;
		}
		else if (answer == 4) {
			break;
		}
		else {
			cout << "Такого действия нет, попробуйте еще" << endl;
		}
		delete [] A;
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
