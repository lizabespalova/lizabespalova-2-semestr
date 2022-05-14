#include "8.h"
#include "Struct8.h"
struct List* Sozdaniespiskarand(){
#ifdef DEBUG
	cout << "\n";
	cout << "Дата:" << __DATE__ << endl;
	cout << "Время:" << __TIME__ << endl;
#endif
	    List* random = new List;
	    char letters[10] = { 'А','Б','В','Д','Н','Е','И','О','С','Р' };
		random->information.in = letters[rand() % 10];
		random->information.init = letters[rand() % 10];
		random->information.birthdate = rand() % 20 + 1956;
		random->information.salary = rand() % 219 + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (518)));
		random->information.numer = rand() % M;
		random->information.name = '№';  
	random->next = NULL;
	return random;
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
		
		
				printf("-----------------------------------------------\n");
				printf("|                  Отдел кадров               |\n");
				printf("|---------------------------------------------|\n");
				printf("|  Фамилия  | Инициалы | Год рождения | Оклад |\n");
				printf("|---------------------------------------------|\n");
				while (print) {
					printf("|%c%-10d|%c%-9c|%-14hd|%-7.2f|\n",
						print->information.name, print->information.numer, print->information.in, print->information.init, print->information.birthdate, print->information.salary);
					print = print->next;
				}
				printf("|---------------------------------------------|\n");
				printf("|Приметка:  |---------------------------------|\n");
				printf("|оклад уста-|---------------------------------|\n");
				printf("|новлен на 1|---------------------------------|\n");
				printf("|января 2000|---------------------------------|\n");
				printf("|-----------|---------------------------------|\n");
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
	int m = 0;
	Data info;
	List* sort = head;
	if (head == NULL) {
		cout << "Пусто" << endl;
		return;
	}
	else {
		
		
			printf("-----------------------------------------------\n");
			printf("|                  Отдел кадров               |\n");
			printf("|---------------------------------------------|\n");
			printf("|  Фамилия  | Инициалы | Год рождения | Оклад |\n");
			printf("|---------------------------------------------|\n");

			while (sort) {

				printf("|%c%-10d|%c%-9c|%-14hd|%-7.2f|\n",
					sort->information.name, sort->information.numer, sort->information.in, sort->information.init, sort->information.birthdate, sort->information.salary);
				sort = sort->next;
			}

			printf("|---------------------------------------------|\n");
			printf("|Приметка:  |---------------------------------|\n");
			printf("|оклад уста-|---------------------------------|\n");
			printf("|новлен на 1|---------------------------------|\n");
			printf("|января 2000|---------------------------------|\n");
			printf("|-----------|---------------------------------|\n");
			sort = head;
			List* left = head;
			List* right = head->next;
			List* temp = new List;
			while (left->next) {
				while (right) {
					if ((left->information.numer) > (right->information.numer)) {
						temp->information = left->information;
						left->information = right->information;
						right->information = temp->information;
					}
					right = right->next;
				}
				left = left->next;
				right = left->next;
			}
			sort = head;
			printf("-----------------------------------------------\n");
			printf("|                  Отдел кадров               |\n");
			printf("|---------------------------------------------|\n");
			printf("|  Фамилия  | Инициалы | Год рождения | Оклад |\n");
			printf("|---------------------------------------------|\n");

			while (sort) {
				printf("|%c%-10d|%c%-9c|%-14hd|%-7.2f|\n",
					sort->information.name, sort->information.numer, sort->information.in, sort->information.init, sort->information.birthdate, sort->information.salary);
				sort = sort->next;
			}
			printf("|---------------------------------------------|\n");
			printf("|Приметка:  |---------------------------------|\n");
			printf("|оклад уста-|---------------------------------|\n");
			printf("|новлен на 1|---------------------------------|\n");
			printf("|января 2000|---------------------------------|\n");
			printf("|-----------|---------------------------------|\n");

	}
#ifdef DEBUG
	cout << "\n";
	cout << "Имя файла:" << __FILE__ << endl;
	cout << "Имя функции:" << __FUNCTION__ << endl;
#endif


}
void Insert(List* head, int position) {
	List* ins = head;
	
	
	int schetchik = 0;
	while (ins) {
		schetchik++;
		ins = ins->next;
	}
	position--;
	if (position < 0 || position > schetchik) {
		cout << "Вы вышли за пределы списка" << endl;
		return;
	}
	
	ins = head;
	
	for (int i = 0; i < position-1; i++)
	{
		ins = ins->next;
	}
	List* temp = new List;
			temp = Sozdaniespiskarand();
			
			temp->next = ins->next;
			ins->next = temp;
}
void Delete(List* head, int position) {
	List* del = head;
	if (head == NULL) {
		cout << " Пусто" << endl;
		return;
	}
	int schetchik = 0;
	while (del) {
		schetchik++;
		del = del->next;
	}
	position--;
	if (position <0 || position > schetchik || head->next == NULL) {
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

	if (position<=0 || position>schetchik) {
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

	       	printf("|%c%-10d|%c%-9c|%-14hd|%-7.2f|\n",
					print->information.name, print->information.numer, print->information.in, print->information.init, print->information.birthdate, print->information.salary);
			
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
		
			create->information.name = '№';
			fprintf(f, "%c", create->information.name);
			create->information.numer = rand() % M;
			fprintf(f, "%d", create->information.numer);
			fprintf(f, " ");
			create->information.in = letters[rand() % 10];
			fprintf(f, "%c", create->information.in);
			fprintf(f, " ");
			create->information.init = letters[rand() % 10];
			fprintf(f, "%c", create->information.init);
			fprintf(f, " ");
			create->information.birthdate = rand() % 20 + 1956;
			fprintf(f, "%hd", create->information.birthdate);
			fprintf(f, " ");
			create->information.salary = rand() % 219 + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (518)));
			fprintf(f, "%f\n", create->information.salary);


	
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
	
			fscanf_s(f, "%c", &sozdanie->information.name);
			printf("|%c", sozdanie->information.name);
			fscanf_s(f, "%d", &sozdanie->information.numer);
			printf("%-10d", sozdanie->information.numer);
			fscanf_s(f, "%c", &sozdanie->information.in);
			fscanf_s(f, "%c", &sozdanie->information.in);
			printf("|%c", sozdanie->information.in);
			fscanf_s(f, "%c", &sozdanie->information.init);
			fscanf_s(f, "%c", &sozdanie->information.init);
			printf("%-9c", sozdanie->information.init);
			fscanf_s(f, "%hd", &sozdanie->information.birthdate);
			printf("|%-14hd", sozdanie->information.birthdate);
			fscanf_s(f, "%f", &sozdanie->information.salary);
			printf("|%-7.2f|", sozdanie->information.salary);
			fscanf_s(f, "%c", &sozdanie->information.in);
			printf("\n");
		

		printf("|---------------------------------------------|\n");
		printf("|Приметка:  |---------------------------------|\n");
		printf("|оклад уста-|---------------------------------|\n");
		printf("|новлен на 1|---------------------------------|\n");
		printf("|января 2000|---------------------------------|\n");
		printf("|---------------------------------------------|\n");
	fclose(f);
		sozdanie->next = NULL;
}