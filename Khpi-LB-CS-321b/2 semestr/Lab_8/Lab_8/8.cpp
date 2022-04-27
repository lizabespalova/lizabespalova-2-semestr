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
void Print(List *head, bool insert) {
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
			if (insert == false) {
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
				print = print->next;
			}
			else if (insert == true) {

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
				print = print->next;
				insert = false;
			}
		}
	}
#ifdef DEBUG
		cout << "\n";
		cout << "Имя файла:" << __FILE__ << endl;
		cout << "Имя функции:" << __FUNCTION__ << endl;
#endif
		
	
}
void Sort(List *head, bool insert) {
#ifdef DEBUG
	cout << "\n";
	cout << "Дата:" << __DATE__ << endl;
	cout << "Время:" << __TIME__ << endl;
#endif
	int m = 0;
	Data info;
	List* sort = head;
	if (head == NULL) {
		cout << "Пусто" << endl;
		return;
	}
	else {
		while (sort) {
			if (insert == false) {
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

					for (int j = i + 1; j < M; j++)

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
			else if (insert == true) {

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






				if (insert == true) {
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

						for (int j = i + 1; j < M; j++)

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
					insert = false;
				}
			}
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
	
	if (head == NULL) {
		cout <<" Пусто" << endl;
		return;
	}
	List* add = head;
	cout << "Выберите позицию" << endl;
	int position;
	cin >> position;

	int schetchik = 0;

	while (add) {
		schetchik++;
		add = add->next;
	}

	if (position<=0 || position>schetchik) {
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
void Delete(List* head) {
	List* del = head;
	if (head == NULL) {
		cout << " Пусто" << endl;
		return;
	}
	cout << "Выберите позицию" << endl;
	int position;
	cin >> position;


	int schetchik = 0;
	while (del) {
		schetchik++;
		del = del->next;
	}

	if (position <= 0 || position > schetchik || head->next == NULL) {
		cout << "Вы вышли за пределы списка" << endl;
		return;
	}
	del = head;
	for (int i = 0; i < position - 1; i++)
	{
		del = del->next;
	}
	List* temp = del->next;
	if (del->next == NULL) {
		cout << "Вы вышли за пределы списка" << endl;
		return;
	}
	del->next = temp->next;
	delete temp;
}
void Poisk(List* head) {
	if (head == NULL) {
		cout << "Пустой список" << endl;
		return;
	}
	List* poisk = head;
	cout << "Выберите позицию" << endl;
	int position;
	cin >> position;
	int schetchik = 0;

	while (poisk) {
		schetchik++;
		poisk =poisk->next;
	}

	if (position<0 || position>schetchik) {
		cout << "Вы вышли за пределы списка" << endl;
		return;
	}
	poisk = head;
	for (int i = 0; i < position - 1; i++)
	{
		poisk= poisk->next;
	}

	List* print = poisk;
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
}
void Create_v_fail(List* head) {
	List* create = new List;
	FILE* f;
	fopen_s(&f, "file.txt", "w");
	if(f == NULL){
		cout << "Ошибка" << endl;
		exit(0);
	}
	else {
		char letters[10] = { 'А','Б','В','Д','Н','Е','И','О','С','Р' };
		for (int i = 0; i < M;i++)
		{
			create->information[i].name = '№';
			fprintf(f, "%c", create->information[i].name);
			create->information[i].numer = rand() % M;
			fprintf(f, "%d", create->information[i].numer);
			fprintf(f, " ");
			create->information[i].in = letters[rand() % 10];
			fprintf(f, "%c", create->information[i].in);
			fprintf(f, " ");
			create->information[i].init = letters[rand() % 10];
			fprintf(f, "%c", create->information[i].init);
			fprintf(f, " ");
			create->information[i].birthdate = rand() % 20 + 1956;
			fprintf(f, "%hd", create->information[i].birthdate);
			fprintf(f, " ");
			create->information[i].salary = rand() % 219 + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (518)));
			fprintf(f, "%f\n", create->information[i].salary);
		}

		for (int i = 0; i < M; i++) {
			create->information[i].numer = rand() % M;
			create->information[i].name = '№';
		}
		fclose(f);
	}
	create->next = NULL;
}
void Sozdanie_s_fail(List* head) {
	List* sozdanie = new List;
	FILE* f;
	fopen_s(&f, "file.txt", "r");
	if (f == NULL) {
		cout << "Ошибка" << endl;
	}
	char a;
	size_t readed = fread(&a, 1, 1, f);
	if (!readed) {
		cout << "Пустой файл" << endl;
		return;
	}
	fclose(f);
		fopen_s(&f, "file.txt", "r");
		printf("-----------------------------------------------\n");
		printf("|                  Отдел кадров               |\n");
		printf("|---------------------------------------------|\n");
		printf("|  Фамилия  | Инициалы | Год рождения | Оклад |\n");
		printf("|---------------------------------------------|\n");
		for (int i = 0; i < M;i++) {
			fscanf_s(f, "%c", &sozdanie->information[i].name);
			printf("|%c", sozdanie->information[i].name);
			fscanf_s(f, "%d", &sozdanie->information[i].numer);
			printf("%-10d", sozdanie->information[i].numer);
			fscanf_s(f, "%c", &sozdanie->information[i].in);
			fscanf_s(f, "%c", &sozdanie->information[i].in);
			printf("|%c", sozdanie->information[i].in);
			fscanf_s(f, "%c", &sozdanie->information[i].init);
			fscanf_s(f, "%c", &sozdanie->information[i].init);
			printf("%-9c", sozdanie->information[i].init);
			fscanf_s(f, "%hd", &sozdanie->information[i].birthdate);
			printf("|%-14hd", sozdanie->information[i].birthdate);
			fscanf_s(f, "%f", &sozdanie->information[i].salary);
			printf("|%-7.2f|", sozdanie->information[i].salary);
			fscanf_s(f, "%c", &sozdanie->information[i].in);
			printf("\n");
		}

		printf("|---------------------------------------------|\n");
		printf("|Приметка:  |---------------------------------|\n");
		printf("|оклад уста-|---------------------------------|\n");
		printf("|новлен на 1|---------------------------------|\n");
		printf("|января 2000|---------------------------------|\n");
		printf("|---------------------------------------------|\n");
	fclose(f);
		sozdanie->next = NULL;
}