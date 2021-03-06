// Lab_8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "8.h"
#include "Struct8.h"
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	List* head=NULL ;
	srand(time(NULL));

	while (true)
	{
		cout << "Выберите действие:" << endl;
		cout << "(1)Создание списка" << endl;
		cout << "(2)Печать списка" << endl;
		cout << "(3)Поиск по критерию(выбор критерия)" << endl;
		cout << "(4)Добавление элемента(в любое заданное место)" << endl;
		cout << "(5)Удаление любого элемента" << endl;
		cout << "(6)Сортировка" << endl;
		cout << "(7)Запись списка в файл" << endl;
		cout << "(8)Создание нового списка из файла" << endl;
		cout << "(9)Выход из программы" << endl;
		int ans;
		cin >> ans;
		if (ans == 1) {
			
			head = Sozdaniespiskarand();
			
		}
			if (ans == 2) {
	 		Print(head);
			}
			if (ans == 3) {
				Poisk(head);
			}
			if (ans == 4) {
				if (head == NULL) {
					head = Sozdaniespiskarand();
				}
				else {
					int position;
					cout << "Введите позицию на которую добавим" << endl;
					cin >> position;
					if (position == 1) {
						List* temp = new List;
						temp = Sozdaniespiskarand();
						temp->next = head;
						head = temp;
					}
					else { Insert(head, position); }
				}
			}
			if (ans == 5) {
				int position;
				cout << "Введите позицию с которой удалим" << endl;
				cin >> position;
				if (position == 1) {
					List* temp = head;
					head = head->next;
					delete temp;
				}
				else { Delete(head, position);}
				
			}
			if (ans == 6) {
				Sort(head);
			}
			if (ans == 7) {
				Create_v_fail(head);
			}
			if (ans == 8) {
				Sozdanie_s_fail(head);
			}
			if (ans == 9) {
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





