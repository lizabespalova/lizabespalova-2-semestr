#include "7.h"
#include "struct7.h"
void Screen() {
#ifdef DEBUG
	cout << "Сегодняшняя дата:" << __DATE__ << endl;
	cout << "Сегодняшнее время:" << __TIME__ << endl;
#endif
	int n = M; 
	Data inf;
	FILE* f1;
	fopen_s(&f1, "t.txt", "w");
	if (f1 == NULL) {
		puts("Ошибка открытия файла");
		exit(0);
	}
	else {

		for (int i = 0; i <n;i++)
		{
			printf("%d.Введите: фамилию, инициалы, год рождения, оклад>",
				n + 1);
			scanf_s("%s", inf.surname, sizeof(inf.surname));
			fprintf(f1, "%s", inf.surname);
			fprintf(f1, " ");
			scanf_s("%s", inf.initials, sizeof(inf.initials));
			fprintf(f1, "%s", inf.initials);
			fprintf(f1, " ");
			scanf_s("%hd", &inf.birthdate);
			fprintf(f1, "%hd", inf.birthdate);
			fprintf(f1, " ");
			scanf_s("%f", &inf.salary);
			fprintf(f1, "%f", inf.salary);
			fprintf(f1, " ");
			fprintf(f1, "\n");
		}
		fclose(f1);
		fopen_s(&f1, "t.txt", "r");
			printf("-----------------------------------------------\n");
			printf("|                  Отдел кадров               |\n");
			printf("|---------------------------------------------|\n");
			printf("|  Фамилия  | Инициалы | Год рождения | Оклад |\n");
			printf("|---------------------------------------------|\n");
			fprintf(f1, "-----------------------------------------------\n");
			
			for (int i = 0; i < n ;i++) {
				fscanf_s(f1, "%s", inf.surname, sizeof(inf.surname));
				printf("|%-11s", inf.surname);
				fscanf_s(f1, "%s", inf.initials, sizeof(inf.initials));
				printf("|%-10s", inf.initials);
				fscanf_s(f1, "%hd", &inf.birthdate);
				printf("|%-14hd", inf.birthdate);
				fscanf_s(f1, "%f", &inf.salary);
				printf("|%-7.2f|", inf.salary);
				printf("\n");
			}
			printf("|---------------------------------------------|\n");
			printf("|Приметка:  |---------------------------------|\n");
			printf("|оклад уста-|---------------------------------|\n");
			printf("|новлен на 1|---------------------------------|\n");
			printf("|января 2000|---------------------------------|\n");
			printf("|-----------|---------------------------------|\n");
			

		}

	fclose(f1);
#ifdef DEBUG
	cout << "\n";
	cout << "Имя файла:" << __FILE__ << endl;
	cout << "Имя функции:" << __FUNCTION__ << endl;
#endif
}
void Random() {
	Data inf;
#ifdef DEBUG
	cout << "Сегодняшняя дата:" << __DATE__ << endl;
	cout << "Сегодняшнее время:" << __TIME__ << endl;
#endif

	FILE* f1;
	char letters[10] = { 'А','Б','В','Д','Н','Е','И','О','С','Р' };
	fopen_s(&f1, "t.txt", "w");
	if (f1 == NULL) {
		puts("Ошибка открытия файла");
		exit(0);
	}
	else {
		for (int i = 0; i < M;i++)
		{
			inf.name = '№';
			fprintf(f1, "%c", inf.name);
			inf.numer = rand() % M;
			fprintf(f1, "%d", inf.numer);
			fprintf(f1, " ");
			inf.in = letters[rand() % 10];
			fprintf(f1, "%c", inf.in);
			fprintf(f1, " ");
			inf.init = letters[rand() % 10];
			fprintf(f1, "%c", inf.init);
			fprintf(f1, " ");
			inf.birthdate = rand() % 20 + 1956;
			fprintf(f1, "%hd", inf.birthdate);
			fprintf(f1, " ");
			inf.salary = rand() % 219 + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (518)));
			fprintf(f1, "%f\n", inf.salary);
			
		}
		fclose(f1);
	}
		
#ifdef DEBUG
	cout << "\n";
	cout << "Имя файла:" << __FILE__ << endl;
	cout << "Имя функции:" << __FUNCTION__ << endl;
#endif
}
void Print()  {
#ifdef DEBUG
	cout << "Сегодняшняя дата:" << __DATE__ << endl;
	cout << "Сегодняшнее время:" << __TIME__ << endl;
#endif
	FILE* f1;
	fopen_s(&f1, "t.txt", "r");
	Data inf;
	int n = M;
	int i;
	if (f1 == NULL) {
		puts("Ошибка открытия файла");
		exit(0);
	}
	else {
		
		printf("-----------------------------------------------\n");
		printf("|                  Отдел кадров               |\n");
		printf("|---------------------------------------------|\n");
		printf("|  Фамилия  | Инициалы | Год рождения | Оклад |\n");
		printf("|---------------------------------------------|\n");
		while (fscanf(f1, "%c", &inf.name) != EOF) {
			printf("|%c", inf.name);
			fscanf_s(f1, "%d", &inf.numer);
			printf("%-10d", inf.numer);
			fscanf_s(f1, "%c", &inf.in);
			fscanf_s(f1, "%c", &inf.in);
			printf("|%c", inf.in);
			fscanf_s(f1, "%c", &inf.init);
			fscanf_s(f1, "%c", &inf.init);
			printf("%-9c", inf.init);
			fscanf_s(f1, "%hd", &inf.birthdate);
			printf("|%-14hd", inf.birthdate);
			fscanf_s(f1, "%f", &inf.salary);
			printf("|%-7.2f|", inf.salary);
			printf("\n");
			fscanf_s(f1, "%c", &inf.name);
		} 

		printf("|---------------------------------------------|\n");
		printf("|Приметка:  |---------------------------------|\n");
		printf("|оклад уста-|---------------------------------|\n");
		printf("|новлен на 1|---------------------------------|\n");
		printf("|января 2000|---------------------------------|\n");
		printf("|---------------------------------------------|\n");
	}
#ifdef DEBUG
	cout << "\n";
	cout << "Имя файла:" << __FILE__ << endl;
	cout << "Имя функции:" << __FUNCTION__ << endl;
#endif
	fclose(f1);

}
void Random3() {
	Data inf;
#ifdef DEBUG
	cout << "Сегодняшняя дата:" << __DATE__ << endl;
	cout << "Сегодняшнее время:" << __TIME__ << endl;
#endif

	FILE* f1;
	char letters[10] = { 'А','Б','В','Д','Н','Е','И','О','С','Р' };
	fopen_s(&f1, "t.txt", "a+");
	if (f1 == NULL) {
		puts("Ошибка открытия файла");
		exit(0);
	}
	else {
		for (int i = 0; i < M ;i++)
		{
			inf.name = '№';
			fprintf(f1, "%c", inf.name);
			inf.numer = rand() % M;
			fprintf(f1, "%d", inf.numer);
			fprintf(f1, " ");
			inf.in = letters[rand() % 10];
			fprintf(f1, "%c", inf.in);
			fprintf(f1, " ");
			inf.init = letters[rand() % 10];
			fprintf(f1, "%c", inf.init);
			fprintf(f1, " ");
			inf.birthdate = rand() % 20 + 1956;
			fprintf(f1, "%hd", inf.birthdate);
			fprintf(f1, " ");
			inf.salary = rand() % 219 + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (518)));
			fprintf(f1, "%f\n", inf.salary);
		}
		fclose(f1);
	}

#ifdef DEBUG
	cout << "\n";
	cout << "Имя файла:" << __FILE__ << endl;
	cout << "Имя функции:" << __FUNCTION__ << endl;
#endif
}
void Random4() {
	Data inf;
#ifdef DEBUG
	cout << "Сегодняшняя дата:" << __DATE__ << endl;
	cout << "Сегодняшнее время:" << __TIME__ << endl;
#endif

	FILE* f1;
	char letters[10] = { 'А','Б','В','Д','Н','Е','И','О','С','Р' };
	fopen_s(&f1, "t.txt", "r+");
	if (f1 == NULL) {
		puts("Ошибка открытия файла");
		exit(0);
	}
	else {
		for (int i =0; i < M ;i++)
		{
			inf.name = '№';
			fprintf(f1, "%c", inf.name);
			inf.numer = rand() % M;
			fprintf(f1, "%d", inf.numer);
			fprintf(f1, " ");
			inf.in = letters[rand() % 10];
			fprintf(f1, "%c", inf.in);
			fprintf(f1, " ");
			inf.init = letters[rand() % 10];
			fprintf(f1, "%c", inf.init);
			fprintf(f1, " ");
			inf.birthdate = rand() % 20 + 1956;
			fprintf(f1, "%hd", inf.birthdate);
			fprintf(f1, " ");
			inf.salary = rand() % 219 + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (518)));
			fprintf(f1, "%f\n", inf.salary);

		}
		fclose(f1);
	}

#ifdef DEBUG
	cout << "\n";
	cout << "Имя файла:" << __FILE__ << endl;
	cout << "Имя функции:" << __FUNCTION__ << endl;
#endif
}
void Print5( bool  schetchik_name, bool schetchik_surname) {
	Data inf;
#ifdef DEBUG
	cout << "Сегодняшняя дата:" << __DATE__ << endl;
	cout << "Сегодняшнее время:" << __TIME__ << endl;
#endif
	 if (schetchik_name == true && schetchik_surname == true) {
		cout << "Разное заполнение файлов. Считывание не будет корректным" << endl;
	}
	else{
	FILE* f1;
	Data inf;
	int n = M;
	cout << "Введите, какую запись распечатаем:" << endl;
	cout << "(1)Фамилии" << endl;
	cout << "(2)Инициалы" << endl;
	cout << "(3)Год рождения" << endl;
	cout << "(4)Оклад" << endl;
	int otvet;
	cin >> otvet;
	if (otvet == 1) {
	
		fopen_s(&f1, "t.txt", "r+");

		if (f1 == NULL) {
			cout << "Ошибка открытия файла" << endl;
			exit(0);
		}
		else if(schetchik_name==true&& schetchik_surname == false){
			printf("|-----------------------------------------------|\n");
			printf("|                   Фамилии                     |\n");
			printf("|-----------------------------------------------|\n");
			while (fscanf(f1, "%c", &inf.name) != EOF) {
				printf("|%c", inf.name);
				fscanf_s(f1, "%d", &inf.numer);
				printf("%-46d|\n", inf.numer);
				fscanf_s(f1, "%c", &inf.in);
				fscanf_s(f1, "%c", &inf.in);
				fscanf_s(f1, "%c", &inf.init);
				fscanf_s(f1, "%c", &inf.init);
				fscanf_s(f1, "%hd", &inf.birthdate);
				fscanf_s(f1, "%f", &inf.salary);
				fscanf_s(f1, "%c", &inf.in);
			}
			printf("|-----------------------------------------------|\n");
		}
		 if (schetchik_surname == true&& schetchik_name == false) {
			printf("|-----------------------------------------------|\n");
			printf("|                   Фамилии                     |\n");
			printf("|-----------------------------------------------|\n");
			
			for (int i = 0; i < n; i++) {
				fscanf_s(f1, "%s", &inf.surname, sizeof(inf.surname));
				printf("|%-47s|\n", inf.surname);
				fscanf_s(f1, "%s", &inf.initials, sizeof(inf.initials));
				fscanf_s(f1, "%hd", &inf.birthdate);
				fscanf_s(f1, "%f", &inf.salary);

			}
			printf("|-----------------------------------------------|\n");
			
		}
		 fclose(f1);

		 }
	else if (otvet == 2) {
		fopen_s(&f1, "t.txt", "r+");
		if (f1 == NULL) {
			puts("Ошибка открытия файла");
			exit(0);
		}
		else if (schetchik_name == true && schetchik_surname == false) {
			printf("|-----------------------------------------------|\n");
			printf("|                  Инициалы                     |\n");
			printf("|-----------------------------------------------|\n");
			
			while (fscanf(f1, "%c", &inf.name) != EOF) {
				fscanf_s(f1, "%d", &inf.numer);
				fscanf_s(f1, "%c", &inf.in);
				fscanf_s(f1, "%c", &inf.in);
				printf("|%c", inf.in);
				fscanf_s(f1, "%c", &inf.init);
				fscanf_s(f1, "%c", &inf.init);
				printf( "%-46c|\n", inf.init);
				fscanf_s(f1, "%hd", &inf.birthdate);
				fscanf_s(f1, "%f", &inf.salary);
				fscanf_s(f1, "%c", &inf.init);
				
			}
			printf("|-----------------------------------------------|\n");
			
		}
		if (schetchik_surname == true && schetchik_name == false) {
			printf("|-----------------------------------------------|\n");
			printf("|                  Инициалы                     |\n");
			printf("|-----------------------------------------------|\n");
			
			for (int i = 0; i < n ; i++) {
				fscanf_s(f1, "%s", &inf.surname, sizeof(inf.surname));
				fscanf_s(f1, "%s", &inf.initials, sizeof(inf.initials));
				printf("|%-47s|\n", inf.initials);
				fscanf_s(f1, "%hd", &inf.birthdate);
				fscanf_s(f1, "%f", &inf.salary);
				
			}
			printf("|-----------------------------------------------|\n");
		
		}
		
		fclose(f1);
	      }
	else if (otvet == 3) {
		  fopen_s(&f1, "t.txt", "r+");

		  if (f1 == NULL) {
			  puts("Ошибка открытия файла");
			  exit(0);
		  }
	
		  else if (schetchik_name == true && schetchik_surname == false) {
			  printf("|-----------------------------------------------|\n");
			  printf("|                 Год рождения                  |\n");
			  printf("|-----------------------------------------------|\n");

			  while (fscanf(f1, "%c", &inf.name) != EOF) {
				  fscanf_s(f1, "%d", &inf.numer);
				  fscanf_s(f1, "%c", &inf.in);
				  fscanf_s(f1, "%c", &inf.in);
				  fscanf_s(f1, "%c", &inf.init);
				  fscanf_s(f1, "%c", &inf.init);
				  fscanf_s(f1, "%hd", &inf.birthdate);
				  printf("|%-47d|\n", inf.birthdate);
				  fscanf_s(f1, "%f", &inf.salary);
				  fscanf_s(f1, "%c", &inf.init);
				
			  }
		  }
			 
			  if (schetchik_surname == true && schetchik_name == false) {
				  printf("|-----------------------------------------------|\n");
				  printf("|                 Год рождения                  |\n");
				  printf("|-----------------------------------------------|\n");
				  for (int i = 0; i < n ; i++) {
					  fscanf_s(f1, "%s", &inf.surname, sizeof(inf.surname));
					  fscanf_s(f1, "%s", &inf.initials, sizeof(inf.initials));
					  fscanf_s(f1, "%hd", &inf.birthdate);
					  printf("|%-47d|\n", inf.birthdate);
					  fscanf_s(f1, "%f", &inf.salary);
				  }
				 
		  }
			  printf("|-----------------------------------------------|\n");
		  fclose(f1);
		  }
	else if (otvet == 4) {
	fopen_s(&f1, "t.txt", "r+");

	if (f1 == NULL) {
		puts("Ошибка открытия файла");
		exit(0);
	}

	else if (schetchik_name == true && schetchik_surname == false) {
		printf("|-----------------------------------------------|\n");
		printf("|                     Оклад                     |\n");
		printf("|-----------------------------------------------|\n");

		while (fscanf(f1, "%c", &inf.name) != EOF) {
			fscanf_s(f1, "%d", &inf.numer);
			fscanf_s(f1, "%c", &inf.in);
			fscanf_s(f1, "%c", &inf.in);
			fscanf_s(f1, "%c", &inf.init);
			fscanf_s(f1, "%c", &inf.init);
			fscanf_s(f1, "%hd", &inf.birthdate);
			fscanf_s(f1, "%f", &inf.salary);
			printf("|%-47f|\n", inf.salary);
			fscanf_s(f1, "%c", &inf.in);
		}
		printf("|-----------------------------------------------|\n");
	}
			
			if (schetchik_surname == true && schetchik_name == false) {
				printf("|-----------------------------------------------|\n");
				printf("|                     Оклад                     |\n");
				printf("|-----------------------------------------------|\n");

				for (int i = 0; i < n; i++) {
					fscanf_s(f1, "%s", &inf.surname, sizeof(inf.surname));
					fscanf_s(f1, "%s", &inf.initials, sizeof(inf.initials));
				
					fscanf_s(f1, "%hd", &inf.birthdate);
					fscanf_s(f1, "%f", &inf.salary);
					printf("|%-47f|\n", inf.salary);
					fscanf_s(f1, "%c", &inf.in);
					
				}
				printf("|-----------------------------------------------|\n");
	}
			fclose(f1);
  }
	else if (otvet>4||otvet<1) {
	cout << "Такого действия нет" << endl;
        }
     }
  }
void Print6( bool  schetchik_name, bool schetchik_surname) {
	 if (schetchik_name == true && schetchik_surname == true) {
		cout << "Разное заполнение файлов. Считывание не будет корректным" << endl;
	}
	else {
		FILE* f1;
		Data inf;
		int n = M;
		fopen_s(&f1, "t.txt", "r+");

		if (f1 == NULL) {
			cout << "Ошибка открытия файла" << endl;
			exit(0);
		}
		else if (schetchik_name == true && schetchik_surname == false) {
			printf("-----------------------------------------------\n");
			printf("|                  Отдел кадров               |\n");
			printf("|---------------------------------------------|\n");
			printf("|  Фамилия  | Инициалы | Год рождения | Оклад |\n");
			printf("|---------------------------------------------|\n");

			while (fscanf(f1, "%c", &inf.name) != EOF) {
				printf("|%c", inf.name);
				fscanf_s(f1, "%d", &inf.numer);
				printf("%-10d", inf.numer);
				fscanf_s(f1, "%c", &inf.in);
				fscanf_s(f1, "%c", &inf.in);
				printf("|%c", inf.in);
				fscanf_s(f1, "%c", &inf.init);
				fscanf_s(f1, "%c", &inf.init);
				printf("%-9c", inf.init);
				fscanf_s(f1, "%hd", &inf.birthdate);
				printf("|%-14hd", inf.birthdate);
				fscanf_s(f1, "%f", &inf.salary);
				printf("|%-7.2f|", inf.salary);
				fscanf_s(f1, "%c", &inf.in);
				printf("\n");
			}
			printf("|---------------------------------------------|\n");
			printf("|Приметка:  |---------------------------------|\n");
			printf("|оклад уста-|---------------------------------|\n");
			printf("|новлен на 1|---------------------------------|\n");
			printf("|января 2000|---------------------------------|\n");
			printf("|-----------|---------------------------------|\n");
		}


		else if (schetchik_surname == true && schetchik_name == false) {

			printf("-----------------------------------------------\n");
			printf("|                  Отдел кадров               |\n");
			printf("|---------------------------------------------|\n");
			printf("|  Фамилия  | Инициалы | Год рождения | Оклад |\n");
			printf("|---------------------------------------------|\n");

			for (int i = 0; i < n ; i++) {
				fscanf_s(f1, "%s", inf.surname, sizeof(inf.surname));
				printf("|%-11s", inf.surname);
				fscanf_s(f1, "%s", inf.initials, sizeof(inf.initials));
				printf("|%-10s", inf.initials);
				fscanf_s(f1, "%hd", &inf.birthdate);
				printf("|%-14hd", inf.birthdate);
				fscanf_s(f1, "%f", &inf.salary);
				printf("|%-7.2f|", inf.salary);
				printf("\n");

			}
			printf("|---------------------------------------------|\n");
			printf("|Приметка:  |---------------------------------|\n");
			printf("|оклад уста-|---------------------------------|\n");
			printf("|новлен на 1|---------------------------------|\n");
			printf("|января 2000|---------------------------------|\n");
			printf("|-----------|---------------------------------|\n");

		}
		fclose(f1);
	}
 }
