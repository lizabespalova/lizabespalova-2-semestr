#include "8.h"
#include "Struct8.h"
struct List* Sozdaniespiskavvod(List*head) {
#ifdef DEBUG
	cout << "\n";
	cout << "Дата:" << __DATE__ << endl;
	cout << "Время:" << __TIME__ << endl;
#endif
	Data info;
	List* vvod = new List;
	for (int i = 0; i < M; i++)
	{
			printf("%d.Введите: фамилию, инициалы, год рождения, оклад>",
				M + 1);
			scanf_s("%s", vvod->information[i].surname, sizeof(vvod->information[i].surname));
			scanf_s("%s", vvod->information[i].initials, sizeof(vvod->information->initials));
			scanf_s("%hd", &vvod->information[i].birthdate);
			scanf_s("%f", &vvod->information[i].salary);
	}
	vvod->next = NULL;
 return vvod;
};
struct List* Sozdaniespiskarand(List* head){
	List* random = new List;
#ifdef DEBUG
	cout << "\n";
	cout << "Дата:" << __DATE__ << endl;
	cout << "Время:" << __TIME__ << endl;
#endif
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
void Destvie(List* head) {
	Data info;
	cout << "Действие:" << endl;
	cout << "(1)Печать" << endl;
	cout << "(2)Сортировка" << endl;
	int ans;
	int m = 0;
	cin >> ans;
	
	if (ans == 1) {
		List* print = head;
		/*print->next = NULL;*/
		while (print) {
			printf("-----------------------------------------------\n");
			printf("|                  Отдел кадров               |\n");
			printf("|---------------------------------------------|\n");
			printf("|  Фамилия  | Инициалы | Год рождения | Оклад |\n");
			printf("|---------------------------------------------|\n");

			for (int i = 0; i < M; i++) {
				printf("|%-11s|%-10s|%-14hd|%-7.2f| \n",
					print->information[i].surname, print->information[i].initials, print->information[i].birthdate, print->information[i].salary);
			}
			printf("|---------------------------------------------|\n");
			printf("|Приметка:  |---------------------------------|\n");
			printf("|оклад уста-|---------------------------------|\n");
			printf("|новлен на 1|---------------------------------|\n");
			printf("|января 2000|---------------------------------|\n");
			printf("|-----------|---------------------------------|\n");
			print = print->next;
		}
	}
	if (ans == 2)
	{
		List* sort = head;
	
		while (sort) {
			printf("-----------------------------------------------\n");
			printf("|                  Отдел кадров               |\n");
			printf("|---------------------------------------------|\n");
			printf("|  Фамилия  | Инициалы | Год рождения | Оклад |\n");
			printf("|---------------------------------------------|\n");
			for (int i = 0; i < M;i++) {
				printf("|%-11s|%-10s|%-14hd|%-7.2f|\n",
					sort->information[i].surname, sort->information[i].initials, sort->information->birthdate, sort->information->salary);
			}
			printf("|---------------------------------------------|\n");
			printf("|Приметка:  |---------------------------------|\n");
			printf("|оклад уста-|---------------------------------|\n");
			printf("|новлен на 1|---------------------------------|\n");
			printf("|января 2000|---------------------------------|\n");
			printf("|-----------|---------------------------------|\n");

			for (int i = 0; i < M;i++) {
				m = i;
				for (int j = i + 1; j < M; j++)

					if (strcmp(sort->information[m].surname, sort->information[j].surname) > 0) m = j;
				if (m > i) {
					info = sort->information[i];
					sort->information[i] = sort->information[m];
					sort->information[m] = info;
				}
			}
		
			printf("-----------------------------------------------\n");
			printf("|                  Отдел кадров               |\n");
			printf("|---------------------------------------------|\n");
			printf("|  Фамилия  | Инициалы | Год рождения | Оклад |\n");
			printf("|---------------------------------------------|\n");
			for (int i = 0; i < M;i++) {
				printf("|%-11s|%-10s|%-14hd|%-7.2f|\n",
					sort->information[i].surname, sort->information[i].initials, sort->information->birthdate, sort->information->salary);
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
void Print(List *head) {
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
void Add(List* head) {
#ifdef DEBUG
	cout << "\n";
	cout << "Дата:" << __DATE__ << endl;
	cout << "Время:" << __TIME__ << endl;
#endif
	List* add = head;
	add = head;
   cout<<"Выберите позицию"<<endl;
   int position;
   cin >> position;
   position--;
   int schetchik=0;
 
	if (head == NULL) {
		cout <<" Пусто" << endl;
		return;
	}
	while (add) {
		schetchik++;
		add = add->next;
	}

	if (position<0 || position>schetchik) {
		cout << "Вы вышли за пределы списка"<<endl;
		return;
	}
	add = head;
	for (int i = 0; i < position-1; i++)
    	{ 
		add = add->next;
		}

	List* temp = new List;

	for (int i = 0; i < M ; i++) {
	
			for (int i = 0; i < M;i++)
			{
				char letters[10] = { 'А','Б','В','Д','Н','Е','И','О','С','Р' };
				temp->information[i].in = letters[rand() % 10];
				temp->information[i].init = letters[rand() % 10];
				temp->information[i].birthdate = rand() % 20 + 1956;
				temp->information[i].salary = rand() % 219 + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (518)));
				temp->information[i].numer = i;
			}

			for (int i = 0; i < M; i++) {
				temp->information[i].numer = rand() % M;
				temp->information[i].name = '№';
			}

		temp->next;
	}
	temp->next = add->next;
	add->next = temp;
	

#ifdef DEBUG
		cout << "\n";
		cout << "Имя файла:" << __FILE__ << endl;
		cout << "Имя функции:" << __FUNCTION__ << endl;
#endif
}