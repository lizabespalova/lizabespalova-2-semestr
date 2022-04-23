// Lab_8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "8.h"
#include "Struct8.h"
int main()
{
	// /*0  1  2  3   4  5  6
	//{5, 2, 4, 3, -2, 4, 7}

	// add 4 to 3 place*/
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	List* head = NULL;
	List* end = new List;

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
			cout << "Как заполним таблицу" << endl;
			cout << "(1)Вручную" << endl;
			cout << "(2)Случайным образом" << endl;
			int otv;
			cin >> otv;
			if (otv == 1) {
		    head = Sozdaniespiskavvod(head);
			Destvie(head);
			}
			if (otv == 2) {

			head = Sozdaniespiskarand(head);

			}
		}
			if (ans == 2) {

				Print(head);

			}
				if (ans == 4) {

					Add(head);

				}

			if (ans == 6) {
				Sort(head);
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
List* people = new List;
//List* t = *head;
//List* t1 = *head;
//int pos;
//cout << "выберите позицию, куда добавим" << endl;
//cin >> people->pos;
//if (*head == NULL) {
//	people->next = NULL;
//	*head = people;
//	return;
//}
////if (/*t->information >= people->information*/ people->pos>M ) {
////	people->next = t;
////	return;
////}
//if ( people->pos > M) {
//	cout<<"Ошибка"<<endl;
//	return;
//}
//
//char letters[10] = { 'А','Б','В','Д','Н','Е','И','О','С','Р' };
//while (t1) {
//	for (int i = 0; i <people->pos;i++)
//	{

//		people->information[i].in = letters[rand() % 10];
//		people->information[i].init = letters[rand() % 10];
//		people->information[i].birthdate = rand() % 20 + 1956;
//		people->information[i].salary = rand() % 219 + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (518)));
//		people->information[i].numer = i;
//		t1 = t->next;
//	}

//	for (int i = 0; i < M; i++) {
//		people->information[i].numer = rand() % M;
//		people->information[i].name = '№';
//		t1 = t->next;
//	}
//	for (int i = 0; i < M; i++) {
//		people->information[i].numer = rand() % M;
//		people->information[i].name = '№';
//		t1 = t->next;
//	}
//	t->next = people;
//	people->next = t1;
//	return;
//	t = t1;
//	t1 = t->next;
//	
//}
//t->next = people;
//people->next = NULL;










	//
			/*people->information = new Data;
		*/


		//if (number < M)
		//{
		//	for (size_t i = number - 1; i <  M - 1; i++)
		//	{
		//		people->information[i + 1] = people->information[i];
		//		printf("%d.Введите: фамилию, инициалы, год рождения, оклад>",
		//			M + 1);
		//		scanf_s("%s", people->information[i].surname, sizeof(people->information[i].surname));
		//		scanf_s("%s", people->information[i].initials, sizeof(people->information->initials));
		//		scanf_s("%hd", &people->information[i].birthdate);
		//		scanf_s("%f", &people->information[i].salary);
		//		
		//	}
		//	
		//}
		//else
		//{
		//	Data* copyOfInformation = new Data[M];
		//	int copyOfLength = M;
		//	for (size_t i = 0; i <M; i++)
		//	{
		//		copyOfInformation[i] = people->information[i];
		///*		people->information[i] = new Data[copyOfLength + 10];*/
		//	}
		//

		//	int n = M + 10;
		//	for (size_t i = 0; i < copyOfLength; i++)
		//	{
		//		people->information[i] = copyOfInformation[i];
		//	}
		//	delete[] copyOfInformation;
		//	copyOfInformation = nullptr;
		//	for (size_t i = number - 1; i < n - 1; i++)
		//	{
		//		people->information[i + 1] = people->information[i];
		//		/*people->information[number] = people->information[i].surname, people->information[i].initials, &people->information[i].birthdate& people->information[i].salary)
		//	}*/
		//	}
		//}