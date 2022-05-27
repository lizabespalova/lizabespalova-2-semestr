// Lab_9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "9.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	List* tail = NULL;
	List* head = NULL;

	srand(time(NULL));
	while (true)
	{
		cout << "Выберите действие:" << endl;
		cout << "(1)Создание списка" << endl;
		cout << "(2)Печать списка с начала" << endl;
		cout << "(3)Печать списка с конца" << endl;
		cout << "(4)Поиск по критерию(с начала списка)" << endl;
		cout << "(5)Поиск по критерию(с конца списка)" << endl;
		cout << "(6)Добавление элемента(в любое заданное место)" << endl;
		cout << "(7)Удаление любого элемента" << endl;
		cout << "(8)Сортировка" << endl;
		cout << "(9)Запись нового списка в файл" << endl;
		cout << "(10)Создание нового списка из файла" << endl;
		cout << "(11)Выход из программы" << endl;
		int ans;
		int* colvo=NULL;
		cin >> ans;
		if (ans == 1) {
			head = Sozdaniespiskarand(head, tail);
		}
		if (ans == 2) {
			Print_s_nachalo(head, tail);
		}
		if (ans == 3) {
			Print_s_konca(head, tail,colvo);
		}
		if (ans == 4) {
			Poisk_s_nachalo(head);
		}
		if (ans == 5) {
			Poisk_s_konca(head, tail);
		}
		if (ans == 6) {
			if (head == NULL) {
				head = Sozdaniespiskarand(head, tail);
			}
			else {
				int position;
				cout << "Введите позицию на которую добавим" << endl;
				cin >> position;
				if (position == 1) {
					List* temp = new List;
					char letters[10] = { 'А','Б','В','Д','Н','Е','И','О','С','Р' };
					temp->information.in = letters[rand() % 10];
					temp->information.init = letters[rand() % 10];
					temp->information.birthdate = rand() % 20 + 1956;
					temp->information.salary = rand() % 219 + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (518)));
					temp->information.numer = rand() % M;
					temp->information.name = '№';
					temp->next = head;
					head->prew = temp;
					temp->prew = NULL;
					head = temp;
					temp->prew = nullptr;
				}
				else { 
					tail =Insert(head, position, tail,colvo);
				}
			}
		}
		if (ans == 7) {
			int position;
			cout << "Введите позицию с которой удалим" << endl;
			cin >> position;
			if (position == 1) {
				List* temp = head;
				head = head->next;
				delete temp;
			}
			else { Delete(head, position); }

		}
		if (ans == 8) {
			Sort(head);
		}
		if (ans == 9) {
			Create_v_fail(head);
		}
		if (ans == 10) {
			Sozdanie_s_fail(head);
		}
		if (ans == 11) {
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
