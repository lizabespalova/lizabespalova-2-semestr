// One-armed_bandit.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include "func.h"
void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL);
	int result = 0;
	cout << "Однорукий бандит" << endl;
	int setansw = 3;
	while (true) {
		int *arr= new int[M];
		int score =0;
		int answer;
		cout << "(1)Правила игры" << endl;
		cout << "(2)Вращать барабан" << endl;
		cout << "(3)Количество очков за все игры" << endl;
		cout << "(4)Настройки" << endl;
		cout << "(5)Выбор фрукта" << endl;
		cout << "(6)Выход" << endl;
	
		cin >> answer;
		switch (answer) {
		case 1: {
			Rules();
			break;
		}
		case 2: {
			system("cls");
			result += Revolve(arr, score, setansw);
			break;
		}
		case 3: {
			system("cls");
			Result(result);
			break;
		}
		case 4: {
			system("cls");
			setansw=Settings(setansw);
			break;
		}
		case 5: {
			system("cls");
			Fruits();
			break;
		}
		case 6: {
			system("cls");
			cout << "До свидания!" << endl;
			exit(0);
			break;
		}
	  }
		delete[]arr;
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
