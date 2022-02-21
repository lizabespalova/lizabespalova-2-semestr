 #pragma once
#include "Current_date_time.h"
#include "Struct.h"

void Screen(Data mm[M]) {
	
#ifdef DEBUG
	cout << "������� ����:" << __DATE__ << endl;
	cout << "������� �����:" << __TIME__ << endl;
#endif
	int n = M; //���������� ��������� � �������
	for (n = 0; n < M; n++)
	{
		printf("%d.�������: �������, ��������, ��� ��������, �����>",
			n + 1);
		scanf_s("%s", mm[n].surname, sizeof(mm[n].surname));
		if (!strcmp(mm[n].surname, "***"))
			break;
		scanf_s("%s", &mm[n].initials, sizeof(mm[n].initials));
		scanf_s("%hd", &mm[n].birthdate);
		scanf_s("%f", &mm[n].salary);
	}
#ifdef DEBUG
	cout << "\n";
	cout << "��� �����:" << __FILE__<<endl;
	cout << "��� �������:" << __FUNCTION__ << endl;
#endif
}




void Random(Data mm[M]) {
	
#ifdef DEBUG
	cout << "������� ����:" << __DATE__ << endl;
	cout << "������� �����:" << __TIME__ << endl;
#endif
	int n = M;
	Data inf;
	for (int n = 0; n < M; n++) {
		printf("%d. ������ �������, �������� >",
			n + 1);
		scanf_s("%s", mm[n].surname, sizeof(mm[n].surname));
		if (!strcmp(mm[n].surname, "***")) break;
		scanf_s("%s", &mm[n].initials, sizeof(mm[n].initials));
	}
	for (int i = 0; i < n;i++) {
		mm[i].birthdate = rand() % 20 + 1956;
		mm[i].salary = rand() % 219 + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (518)));;
	}
	mm[15] = mm[2];
	mm[2] = mm[0];
	mm[0] = mm[15];

#ifdef DEBUG
	cout << "\n";
	cout << "��� �����:" << __FILE__ << endl;
	cout << "��� �������:" << __FUNCTION__ << endl;
#endif
}
void Sort(Data mm[]) {
#ifdef DEBUG
	cout << "������� ����:" << __DATE__ << endl;
	cout << "������� �����:" << __TIME__ << endl;
#endif
	Data inf;
	int n = M;
	int m;//������ ������������ ��������
	printf("-----------------------------------------------\n");
	printf("|                  ����� ������               |\n");
	printf("|---------------------------------------------|\n");
	printf("|  �������  | �������� | ��� �������� | ����� |\n");
	printf("|---------------------------------------------|\n");
	for (int i = 0; i < n; i++)
		printf("|%-11s|%-10s|%-14hd|%-7.2f|\n",
			mm[i].surname, mm[i].initials, mm[i].birthdate, mm[i].salary);
	printf("|---------------------------------------------|\n");
	printf("|��������:  |---------------------------------|\n");
	printf("|����� ����-|---------------------------------|\n");
	printf("|������ �� 1|---------------------------------|\n");
	printf("|������ 2000|---------------------------------|\n");
	printf("|-----------|---------------------------------|\n");
	for (int i = 0; i < n - 1; i++) {
		m = i; /* ����������� ������� - ������ */
		for (int j = i + 1; j < n; j++)

			if (strcmp(mm[m].surname, mm[j].surname) > 0) m = j;
		if (m > i) {

			inf = mm[i];
			mm[i] = mm[m];
			mm[m] = inf;
		}
	}
	
	printf("-----------------------------------------------\n");
	printf("|                  ����� ������               |\n");
	printf("|---------------------------------------------|\n");
	printf("|  �������  | �������� | ��� �������� | ����� |\n");
	printf("|---------------------------------------------|\n");
	for (int i = 0; i < n; i++)
		printf("|%-11s|%-10s|%-14hd|%-7.2f|\n",
			mm[i].surname, mm[i].initials, mm[i].birthdate, mm[i].salary);
	printf("|---------------------------------------------|\n");
	printf("|��������:  |---------------------------------|\n");
	printf("|����� ����-|---------------------------------|\n");
	printf("|������ �� 1|---------------------------------|\n");
	printf("|������ 2000|---------------------------------|\n");
	printf("|-----------|---------------------------------|\n");
#ifdef DEBUG
	cout << "\n";
	cout << "��� �����:" << __FILE__ << endl;
	cout << "��� �������:" << __FUNCTION__ << endl;
#endif

}

void Print(Data mm[]) {
#ifdef DEBUG
	cout << "������� ����:" << __DATE__ << endl;
	cout << "������� �����:" << __TIME__ << endl;
#endif

	int n = M; //���������� ��������� � �������
	int i;// ������� ������� � �������
	printf("-----------------------------------------------\n");
	printf("|                  ����� ������               |\n");
	printf("|---------------------------------------------|\n");
	printf("|  �������  | �������� | ��� �������� | ����� |\n");
	printf("|---------------------------------------------|\n");
	for (int i = 0; i < n; i++)
		printf("|%-11s|%-10s|%-14hd|%-7.2f|\n",
			mm[i].surname, mm[i].initials, mm[i].birthdate, mm[i].salary);
	printf("|---------------------------------------------|\n");
	printf("|��������:  |---------------------------------|\n");
	printf("|����� ����-|---------------------------------|\n");
	printf("|������ �� 1|---------------------------------|\n");
	printf("|������ 2000|---------------------------------|\n");
	printf("|-----------|---------------------------------|\n");
#ifdef DEBUG
	cout << "\n";
	cout << "��� �����:" << __FILE__ << endl;
	cout << "��� �������:" << __FUNCTION__ << endl;
#endif
}
