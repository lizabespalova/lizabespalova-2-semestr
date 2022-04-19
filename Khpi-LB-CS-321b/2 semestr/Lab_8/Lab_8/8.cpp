#include "8.h"
#include "Struct8.h"
struct List* Sozdaniespiskavvod(List*head) {
	List* vvod =new List;
#ifdef DEBUG
	cout << "\n";
	cout << "Дата:" << __DATE__ << endl;
	cout << "Время:" << __TIME__ << endl;
#endif
	Data info;
    vvod = new List;
	vvod->next = new List;
	for (int i = 0; i < M; i++)
	{
			printf("%d.Введите: фамилию, инициалы, год рождения, оклад>",
				M + 1);
			scanf_s("%s", vvod->information[i].surname, sizeof(vvod->information[i].surname));
			scanf_s("%s", vvod->information[i].initials, sizeof(vvod->information->initials));
			scanf_s("%hd", &vvod->information[i].birthdate);
			scanf_s("%f", &vvod->information[i].salary);
	}
	cout << "Действие:" << endl;
	cout << "(1)Сортировка" << endl;
	cout << "(2)Печать" << endl;
	int ans;
	int m = 0;
	cin >> ans;
	if (ans == 1)
	{
			printf("-----------------------------------------------\n");
			printf("|                  Отдел кадров               |\n");
			printf("|---------------------------------------------|\n");
			printf("|  Фамилия  | Инициалы | Год рождения | Оклад |\n");
			printf("|---------------------------------------------|\n");

			for (int i = 0; i < M;i++) {
				printf("|%-11s|%-10s|%-14hd|%-7.2f|\n",
					vvod->information[i].surname, vvod->information[i].initials, vvod->information->birthdate, vvod->information->salary);
			}

			printf("|---------------------------------------------|\n");
			printf("|Приметка:  |---------------------------------|\n");
			printf("|оклад уста-|---------------------------------|\n");
			printf("|новлен на 1|---------------------------------|\n");
			printf("|января 2000|---------------------------------|\n");
			printf("|-----------|---------------------------------|\n");
			for (int i =0; i < M;i++) {
				m = i;
				for (int j = i + 1; j < M; j++)

					if (strcmp(vvod->information[m].surname, vvod->information[j].surname) > 0) m = j;
				if (m > i) {
					info = vvod->information[i];
					vvod->information[i] = vvod->information[m];
					vvod->information[m] = info;
				}
			}
			printf("-----------------------------------------------\n");
			printf("|                  Отдел кадров               |\n");
			printf("|---------------------------------------------|\n");
			printf("|  Фамилия  | Инициалы | Год рождения | Оклад |\n");
			printf("|---------------------------------------------|\n");
			for (int i = 0; i < M;i++) {
				printf("|%-11s|%-10s|%-14hd|%-7.2f|\n",
					vvod->information[i].surname, vvod->information[i].initials, vvod->information->birthdate, vvod->information->salary);
			}
			printf("|---------------------------------------------|\n");
			printf("|Приметка:  |---------------------------------|\n");
			printf("|оклад уста-|---------------------------------|\n");
			printf("|новлен на 1|---------------------------------|\n");
			printf("|января 2000|---------------------------------|\n");
			printf("|-----------|---------------------------------|\n");
			vvod = vvod->next;
		
		}
	
	else if (ans == 2)
	{
			printf("-----------------------------------------------\n");
			printf("|                  Отдел кадров               |\n");
			printf("|---------------------------------------------|\n");
			printf("|  Фамилия  | Инициалы | Год рождения | Оклад |\n");
			printf("|---------------------------------------------|\n");
			for (int i = 0; i < M;i++) {
				printf("|%-11s|%-10s|%-14hd|%-7.2f|\n",
					vvod->information[i].surname, vvod->information[i].initials, vvod->information->birthdate, vvod->information->salary);
			}
			printf("|---------------------------------------------|\n");
			printf("|Приметка:  |---------------------------------|\n");
			printf("|оклад уста-|---------------------------------|\n");
			printf("|новлен на 1|---------------------------------|\n");
			printf("|января 2000|---------------------------------|\n");
			printf("|-----------|---------------------------------|\n");

			vvod = vvod->next;
		
	}

#ifdef DEBUG
cout << "\n";
cout << "Имя файла:" << __FILE__ << endl;
cout << "Имя функции:" << __FUNCTION__ << endl;
#endif

vvod->next = NULL;
return head;
};
struct List* Sozdaniespiskarand(List* end){
	List* head = end;
	List* random = new List;
#ifdef DEBUG
	cout << "\n";
	cout << "Дата:" << __DATE__ << endl;
	cout << "Время:" << __TIME__ << endl;
#endif
	cout << "Введите количество списков";
	char letters[10] = { 'А','Б','В','Д','Н','Е','И','О','С','Р' };
	for (int i = 0; i < M ;i++)
	{
	
		random->information[i].in = letters[rand() % 10];
		random->information[i].init = letters[rand() % 10];
		random->information[i].birthdate = rand() % 20 + 1956;
		random->information[i].salary = rand() % 219 + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (518)));
		random->information[i].numer = i;
	}

	for (int i = 0; i < M; i++) {
		random->information[i].numer = rand() % M;
		random->information[i].name = '№';
	}
#ifdef DEBUG
	cout << "\n";
	cout << "Имя файла:" << __FILE__ << endl;
	cout << "Имя функции:" << __FUNCTION__ << endl;
#endif
  
	random->next = NULL;
	return random;
}
void Print(List *head) {
	
	List* random =head;
#ifdef DEBUG
	cout << "\n";
	cout << "Дата:" << __DATE__ << endl;
	cout << "Время:" << __TIME__ << endl;
#endif
	List* print = head;
	if (head == NULL) {
		cout << "Пусто" << endl;
		return;
	}
	else {
		while (print) {
			printf("-----------------------------------------------\n");
			printf("|                  Отдел кадров               |\n");
			printf("|---------------------------------------------|\n");
			printf("|  Фамилия  | Инициалы | Год рождения | Оклад |\n");
			printf("|---------------------------------------------|\n");

			for (int i = 0; i < M; i++) {
				printf("|%c%-10d|%c%-9c|%-14hd|%-7.2f|\n",
					print->information[i].name, print->information[i].numer, print->information[i].in, print->information[i].init, print->information[i].birthdate, print->information[i].salary);
			}
			printf("|---------------------------------------------|\n");
			printf("|Приметка:  |---------------------------------|\n");
			printf("|оклад уста-|---------------------------------|\n");
			printf("|новлен на 1|---------------------------------|\n");
			printf("|января 2000|---------------------------------|\n");
			printf("|-----------|---------------------------------|\n");
			print=print->next ;
			
		}
	}
#ifdef DEBUG
		cout << "\n";
		cout << "Имя файла:" << __FILE__ << endl;
		cout << "Имя функции:" << __FUNCTION__ << endl;
#endif
		
	
}
void Sort(List *head) {
#ifdef DEBUG
	cout << "\n";
	cout << "Дата:" << __DATE__ << endl;
	cout << "Время:" << __TIME__ << endl;
#endif
	Data info;
	List* sort = head;
	if (head == NULL) {
		cout << "Пусто" << endl;
		return;
	}
	else {
		while (sort) {
			printf("-----------------------------------------------\n");
			printf("|                  Отдел кадров               |\n");
			printf("|---------------------------------------------|\n");
			printf("|  Фамилия  | Инициалы | Год рождения | Оклад |\n");
			printf("|---------------------------------------------|\n");

			
				for (int i = 0; i < M; i++) {
					printf("|%c%-10d|%c%-9c|%-14hd|%-7.2f|\n",
						sort->information[i].name, sort->information[i].numer, sort->information[i].in, sort->information[i].init, sort->information[i].birthdate, sort->information[i].salary);
				}

			printf("|---------------------------------------------|\n");
			printf("|Приметка:  |---------------------------------|\n");
			printf("|оклад уста-|---------------------------------|\n");
			printf("|новлен на 1|---------------------------------|\n");
			printf("|января 2000|---------------------------------|\n");
			printf("|-----------|---------------------------------|\n");
		


			for (int i = 0; i < M; i++) {

				for (int j = i + 1; j <M; j++)

					if (sort->information[i].numer > sort->information[j].numer) {
						if (j > i) {
							info = sort->information[i];
							sort->information[i] = sort->information[j];
							sort->information[j] = info;
						}
					}
			}

			printf("-----------------------------------------------\n");
			printf("|                  Отдел кадров               |\n");
			printf("|---------------------------------------------|\n");
			printf("|  Фамилия  | Инициалы | Год рождения | Оклад |\n");
			printf("|---------------------------------------------|\n");

			for (int i = 0; i < M; i++) {
				printf("|%c%-10d|%c%-9c|%-14hd|%-7.2f|\n",
					sort->information[i].name, sort->information[i].numer, sort->information[i].in, sort->information[i].init, sort->information[i].birthdate, sort->information[i].salary);
			}
			printf("|---------------------------------------------|\n");
			printf("|Приметка:  |---------------------------------|\n");
			printf("|оклад уста-|---------------------------------|\n");
			printf("|новлен на 1|---------------------------------|\n");
			printf("|января 2000|---------------------------------|\n");
			printf("|-----------|---------------------------------|\n");
			sort = sort->next;
		}
	}
#ifdef DEBUG
	cout << "\n";
	cout << "Имя файла:" << __FILE__ << endl;
	cout << "Имя функции:" << __FUNCTION__ << endl;
#endif


}
void Add(List* head, int size) {
	/*List* current = new List;*/
#ifdef DEBUG
	cout << "\n";
	cout << "Дата:" << __DATE__ << endl;
	cout << "Время:" << __TIME__ << endl;
#endif
   cout<<"Выберите позицию"<<endl;
   int position;
   cin >> position;
   int shetchik = 1;
	if (head == NULL) {
		head = new List;
	}

		/*List* current = head;
		current->next = new List;*/
		
		
		
		/*size++;
		List* arr2 = new List[size];
		for (int i = 0; i < size; i++)
		{
			if (i < position)
				arr2[i] = head[i];
			else if (i > position)
				arr2[i] = head[i - 1];
		}*/
		// 0 1 2 3 4		head
		// 0 1 X 2 3 4		arr2
		
		
		
		
		/*while (head) {
			head = head->next;
			shetchik++;
		}
		if (position > shetchik || position<0) {
			cout << "Вы вышли за пределы списка" << endl;;
			return;
		}*/
		shetchik = 1;
		while (shetchik!=position) {
			current = current->next;
			shetchik++;
		}
		
		if (shetchik == position) {
			char letters[10] = { 'А','Б','В','Д','Н','Е','И','О','С','Р' };
			for (int i = 0; i < M;i++)
			{
				current->information[i].in = letters[rand() % 10];
				current->information[i].init = letters[rand() % 10];
				current->information[i].birthdate = rand() % 20 + 1956;
				current->information[i].salary = rand() % 219 + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (518)));
				current->information[i].numer = i;
		}

			for (int i = 0; i < M; i++) {
				current->information[i].numer = rand() % M;
				current->information[i].name = '№';
			}
		}
		
		current->next;
		
			while (current != NULL) {
				current->next = NULL;
				current = current->next;
			}
		

#ifdef DEBUG
		cout << "\n";
		cout << "Имя файла:" << __FILE__ << endl;
		cout << "Имя функции:" << __FUNCTION__ << endl;
#endif
}