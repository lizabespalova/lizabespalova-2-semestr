
#include "9.h"
struct List*Sozdaniespiskarand(List*head,List *tail) {
	List* random = new List;
	if (head == NULL) {
		random->prew = NULL;
		head = tail = random ;
	}
	else {
		tail->next = random;
		random->prew = tail;
		tail = random;
	}
	char letters[10] = { '�','�','�','�','�','�','�','�','�','�' };
	random->information.in = letters[rand() % 10];
	random->information.init = letters[rand() % 10];
	random->information.birthdate = rand() % 20 + 1956;
	random->information.salary = rand() % 219 + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (518)));
	random->information.numer = rand() % M;
	random->information.name = '�';
	random->next = NULL;

	return random;
}
void Print_s_nachalo(List* head, List* tail) {

	List* print = head;
	if (head == NULL) {
		cout << "�����" << endl;
		return;
	}
	else {


		printf("-----------------------------------------------\n");
		printf("|                  ����� ������               |\n");
		printf("|---------------------------------------------|\n");
		printf("|  �������  | �������� | ��� �������� | ����� |\n");
		printf("|---------------------------------------------|\n");
		while (print) {
			printf("|%c%-10d|%c%-9c|%-14hd|%-7.2f|\n",
				print->information.name, print->information.numer, print->information.in, print->information.init, print->information.birthdate, print->information.salary);
			print = print->next;
		
		}
		printf("|---------------------------------------------|\n");
		printf("|��������:  |---------------------------------|\n");
		printf("|����� ����-|---------------------------------|\n");
		printf("|������ �� 1|---------------------------------|\n");
		printf("|������ 2000|---------------------------------|\n");
		printf("|-----------|---------------------------------|\n");
	
	}
}
void Sort(List* head) {
#ifdef DEBUG
	cout << "\n";
	cout << "����:" << __DATE__ << endl;
	cout << "�����:" << __TIME__ << endl;
#endif
	int m = 0;
	Data info;
	List* sort = head;
	if (head == NULL) {
		cout << "�����" << endl;
		return;
	}
	else {


		printf("-----------------------------------------------\n");
		printf("|                  ����� ������               |\n");
		printf("|---------------------------------------------|\n");
		printf("|  �������  | �������� | ��� �������� | ����� |\n");
		printf("|---------------------------------------------|\n");

		while (sort) {

			printf("|%c%-10d|%c%-9c|%-14hd|%-7.2f|\n",
				sort->information.name, sort->information.numer, sort->information.in, sort->information.init, sort->information.birthdate, sort->information.salary);
			sort = sort->next;
		}

		printf("|---------------------------------------------|\n");
		printf("|��������:  |---------------------------------|\n");
		printf("|����� ����-|---------------------------------|\n");
		printf("|������ �� 1|---------------------------------|\n");
		printf("|������ 2000|---------------------------------|\n");
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
		printf("|                  ����� ������               |\n");
		printf("|---------------------------------------------|\n");
		printf("|  �������  | �������� | ��� �������� | ����� |\n");
		printf("|---------------------------------------------|\n");

		while (sort) {
			printf("|%c%-10d|%c%-9c|%-14hd|%-7.2f|\n",
				sort->information.name, sort->information.numer, sort->information.in, sort->information.init, sort->information.birthdate, sort->information.salary);
			sort = sort->next;
		}
		printf("|---------------------------------------------|\n");
		printf("|��������:  |---------------------------------|\n");
		printf("|����� ����-|---------------------------------|\n");
		printf("|������ �� 1|---------------------------------|\n");
		printf("|������ 2000|---------------------------------|\n");
		printf("|-----------|---------------------------------|\n");

	}
#ifdef DEBUG
	cout << "\n";
	cout << "��� �����:" << __FILE__ << endl;
	cout << "��� �������:" << __FUNCTION__ << endl;
#endif


}
struct List* Insert(List* head, int position, List* tail) {
	List* ins = head;	
	List* end = head;
	int schetchik = 0;
	while (ins) {
		schetchik++;
		ins = ins->next;
	}
	position--;
	if (position < 0 || position > schetchik) {
		cout << "�� ����� �� ������� ������" << endl;
		return(0);
	}
	ins = head;
	for (int i = 0; i < position - 1; i++)
	{
		ins = ins->next;
		
	}
	List* temp = new List;
	
	char letters[10] = { '�','�','�','�','�','�','�','�','�','�' };
	temp->information.in = letters[rand() % 10];
	temp->information.init = letters[rand() % 10];
	temp->information.birthdate = rand() % 20 + 1956;
	temp->information.salary = rand() % 219 + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (518)));
	temp->information.numer = rand() % M;
	temp->information.name = '�';
	temp->next = ins->next;
	ins->next = temp;
	temp = head;
	ins = head;
	while(ins->next){
		temp->prew = ins;
		ins = ins->next;
	}
	tail = temp;
	return tail;
}
void Delete(List* head, int position) {
	List* del = head;
	if (head == NULL) {
		cout << " �����" << endl;
		return;
	}
	int schetchik = 0;
	while (del) {
		schetchik++;
		del = del->next;
	}
	position--;
	if (position <0 || position > schetchik || head->next == NULL) {
		cout << "�� ����� �� ������� ������" << endl;
		return;
	}
	del = head;

	for (int i = 0; i < position - 1; i++)
	{
		del = del->next;
	}
	List* temp = del->next;
	if (del->next == NULL) {
		cout << "�� ����� �� ������� ������" << endl;
		return;
	}
	del->next = temp->next;
	delete temp;
}
void Poisk_s_nachalo(List* head) {
	if (head == NULL) {
		cout << "������ ������" << endl;
		return;
	}
	List* poisk = head;
	List* print = poisk;
	printf("-----------------------------------------------\n");
	printf("|                  ����� ������               |\n");
	printf("|---------------------------------------------|\n");
	printf("|  �������  | �������� | ��� �������� | ����� |\n");
	printf("|---------------------------------------------|\n");

	printf("|%c%-10d|%c%-9c|%-14hd|%-7.2f|\n",
		print->information.name, print->information.numer, print->information.in, print->information.init, print->information.birthdate, print->information.salary);

	printf("|---------------------------------------------|\n");
	printf("|��������:  |---------------------------------|\n");
	printf("|����� ����-|---------------------------------|\n");
	printf("|������ �� 1|---------------------------------|\n");
	printf("|������ 2000|---------------------------------|\n");
	printf("|-----------|---------------------------------|\n");
}
void Create_v_fail(List* head) {
	List* create = new List;
	FILE* f;
	fopen_s(&f, "file.txt", "a");
	if (f == NULL) {
		cout << "������" << endl;
		exit(0);
	}
	else {
		char letters[10] = { '�','�','�','�','�','�','�','�','�','�' };

		create->information.name = '�';
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
		cout << "������" << endl;
	}
	char a;
	size_t readed = fread(&a, 1, 1, f);
	if (!readed) {
		cout << "������ ����" << endl;
		return;
	}
	fclose(f);
	fopen_s(&f, "file.txt", "r");
	printf("-----------------------------------------------\n");
	printf("|                  ����� ������               |\n");
	printf("|---------------------------------------------|\n");
	printf("|  �������  | �������� | ��� �������� | ����� |\n");
	printf("|---------------------------------------------|\n");
	while (fscanf_s(f, "%c", &sozdanie->information.name)!=EOF) {
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
		sozdanie->next = NULL;
	}
		printf("|---------------------------------------------|\n");
		printf("|��������:  |---------------------------------|\n");
		printf("|����� ����-|---------------------------------|\n");
		printf("|������ �� 1|---------------------------------|\n");
		printf("|������ 2000|---------------------------------|\n");
		printf("|---------------------------------------------|\n");
	fclose(f);
}
void Print_s_konca(List* head, List*tail) {
	List* print = tail;
	if (head == NULL) {
		cout << "�����" << endl;
		return;
	}
	else {
			printf("-----------------------------------------------\n");
			printf("|                  ����� ������               |\n");
			printf("|---------------------------------------------|\n");
			printf("|  �������  | �������� | ��� �������� | ����� |\n");
			printf("|---------------------------------------------|\n");
			while (print) {
				printf("|%c%-10d|%c%-9c|%-14hd|%-7.2f|\n",
					print->information.name, print->information.numer, print->information.in, print->information.init, print->information.birthdate, print->information.salary);
				print = print->prew;
			}
			printf("|---------------------------------------------|\n");
			printf("|��������:  |---------------------------------|\n");
			printf("|����� ����-|---------------------------------|\n");
			printf("|������ �� 1|---------------------------------|\n");
			printf("|������ 2000|---------------------------------|\n");
			printf("|-----------|---------------------------------|\n");
	    
    }
}
void Poisk_s_konca(List* head, List*tail) {
	if (head == NULL) {
		cout << "������ ������" << endl;
		return;
	}
	List* poisk = tail;
	List* print = poisk;
	printf("-----------------------------------------------\n");
	printf("|                  ����� ������               |\n");
	printf("|---------------------------------------------|\n");
	printf("|  �������  | �������� | ��� �������� | ����� |\n");
	printf("|---------------------------------------------|\n");

	printf("|%c%-10d|%c%-9c|%-14hd|%-7.2f|\n",
		print->information.name, print->information.numer, print->information.in, print->information.init, print->information.birthdate, print->information.salary);

	printf("|---------------------------------------------|\n");
	printf("|��������:  |---------------------------------|\n");
	printf("|����� ����-|---------------------------------|\n");
	printf("|������ �� 1|---------------------------------|\n");
	printf("|������ 2000|---------------------------------|\n");
	printf("|-----------|---------------------------------|\n");
}