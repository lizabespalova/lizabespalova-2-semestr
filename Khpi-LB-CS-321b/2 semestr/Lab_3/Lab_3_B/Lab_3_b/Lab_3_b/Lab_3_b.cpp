// Lab_3_b.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include "Massiv.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int size = 0;
	bool vivod;
	while (true) {
		cout << endl;
		cout << "Введите количество элементов массива:" << endl;
		cin >> size;
		int* A = new int[size];
		cout << "Ваш массив:" << endl;
		for (int i = 0; i < size; i++)
		{
			*(A + i) = rand() % 20 - 10;
			cout << *(A + i) << setw(4);
		}
		cout << endl;
#ifdef DEBUG

		cout << "Введите, какое действие вы хотите увидеть:" << endl;
		cout << "(1)Отрицательный массив:" << endl;
		cout << "(2)Положительный массив:" << endl;
		cout << "(3)Нулевой массив:" << endl;
		cout << "(4)Все действия сразу:" << endl;
		int answer;
		cin >> answer;
#endif // DEBUG
		srand(time(NULL));
		int count = bcount(A, size);
		int razm = crazm(A, size);
		int razmer = drazmer(A, size);
		int* b = new int[count];
		int* c = new int[razm];
		int* d = new int[razmer];
#ifdef DEBUG
		if (answer == 1) {
			B(A, b, size, count, 1);
		}
		if (answer == 2) {
			C(A, c, size, razm,1);
		}
		if (answer == 3) {
			D(A, d, size, razmer,1);
		}
		if (answer == 4) {
			B(A, b, size, count,1);
			C(A, c, size, razm,1);
			D(A, d, size, razmer,1);
		}
#endif DEBUG
		B(A, b, size, count,0);
		C(A, c, size, razm,0);
		D(A, d, size, razmer,0);
		cout << endl;
		cout << "Переписанный массив" << endl;
		for (int i = 0; i < razmer; i++) {
			*(A + i) = *(d + i);
		}
		delete[]d;
		for (int i = razmer, j = 0; i < count, j < count;i++, j++) {

			*(A + i) = *(b + j);

		}
		delete[]b;
		for (int i = razmer + count, j = 0; i < razm, j < razm;i++, j++) {

			*(A + i) = *(c + j);

		}
		delete[]c;
		for (int i = 0;i < size;i++) {
			cout << *(A + i) << setw(4);
		}
		delete[]A;
	
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
