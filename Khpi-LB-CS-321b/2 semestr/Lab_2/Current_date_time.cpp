#pragma once
#include "Current_date_time.h"

struct Array {
	int ar;
};


void Screen() {
	Array ar[M];
#ifdef DEBUG
	cout << "������� ����:" << __DATE__ << endl;
	cout << "������� �����:" << __TIME__ << endl;
#endif
	cout << "������� ������:" << endl;
	for (int i = 0; i < M; i++)
	{
		cin >> ar[i].ar;
	}
	cout << "���� ��������� ������:" << endl;
	for (int i = 0; i < M; i++)
	{
		cout<< ar[i].ar<<" ";
	}
#ifdef DEBUG
	cout << "\n";
	cout << "��� �����:" << __FILE__<<endl;
	cout << "��� �������:" << __FUNCTION__ << endl;
#endif
}




void Random() {
	Array ar[M];
#ifdef DEBUG
	cout << "������� ����:" << __DATE__ << endl;
	cout << "������� �����:" << __TIME__ << endl;
#endif
	for (int i=0; i<M; i++) 
	{
		ar[i].ar = rand() % 10 + 1;
	}
	cout << "���� ������, ����������� ��������� �������:" << endl;
	for (int i = 0; i < M; i++)
	{
		cout << ar[i].ar << " ";
	}
#ifdef DEBUG
	cout << "\n";
	cout << "��� �����:" << __FILE__ << endl;
	cout << "��� �������:" << __FUNCTION__ << endl;
#endif
}
