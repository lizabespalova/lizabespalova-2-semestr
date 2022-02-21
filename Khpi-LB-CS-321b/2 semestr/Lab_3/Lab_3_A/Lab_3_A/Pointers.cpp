#include "Pointers.h"
void Otnositelniy(int *arr, int size) {
	//���������� ������� ����� ������������� �����
	cout << endl;
	cout << "��� ��������� ������" << endl;
	for (int i = 0; i < size; i++) {
		*(arr + i) = rand() % 20 - 10;
		cout << *(arr + i)<<setw(4);
	}
	cout << endl;
	//���������� ������������� ���������
	int count=0;
	for (int i = 0; i < size;i++) {
		if (*(arr + i) < 0) {
			count++;
		}
	}
	cout << "���������� ������������� ���������:" <<count<< endl;
	//����� ������������� ���������
	int sum = 0;
	for (int i = 0; i < size; i++) {
		if (*(arr + i) < 0) {
			sum += *(arr + i);
		}
	}
	cout << "����� ������������� ���������:" << sum << endl;

}
void Absolutniy(int* arr, int size) {
	//���������� ������ �������
	int* arr_start = arr;
	//���������� ������� ��� ������ ���������� ���������
	cout << endl;
	cout << "��� ��������� ������" << endl;
	for (int i = 0; i < size;i++) {
		*arr = rand() % 20 - 10;
		cout << *arr << setw(4);
		arr++;
	
	}
	//������� ��������� �� ������
	arr = arr_start;
	//���������� ������������� ���������
	int count = 0;
	cout << endl;
	for (int i = 0;i < size;i++) {
		if (*arr < 0) {
			count++;
		}
		arr++;
	}
	cout << "���������� ������������� ���������:" << count << endl;
	//������� ��������� �� ������
	arr = arr_start;
	//����� ������������� ��������� 
	int sum = 0;
	for (int i = 0; i < size;i++) {
		if (*arr < 0) {
			sum += *arr;
		}
		arr++;
	}
	cout << "����� ������������� ���������:" << sum << endl;
	
}
void Noadres(int* arr, int size) {
	//���������� ������ �������
	int* arr_start = arr;
	//���������� ������� ��� ����������
	cout << endl;
	cout << "��� ��������� ������" << endl;
	for (;arr < arr_start + size;arr++) {
		*arr = rand() % 20 - 10;
		cout << *arr << setw(4);
	}
	//������� ��������� �� ������
	arr = arr_start;
	//���������� ������������� ���������
	int count = 0;
	cout << endl;
	for (arr = arr_start;arr < arr_start + size;arr++) {
		if (*arr < 0) {
			count++;
		}
	}
	cout << "���������� ������������� ���������:" << count << endl;
	//������� ��������� �� ������
	arr = arr_start;
	//����� ������������� ��������� 
	int sum = 0;
	for (arr = arr_start;arr < arr_start + size;arr++) {
		if (*arr < 0) {
			sum += *arr;
		}
	}
	cout << "����� ������������� ���������:" << sum << endl;
	
}
void Maspoint() {
	const int size = 10000;
	int M;
	cout << "�� ������� ��������� �������� ������(�� ������ 10000)" << endl;
	cin >> M;
	int arr[size];
	//���������� �������
	cout << "��� ��������� ������" << endl;
	for (int i = 0; i < M;i++) {
		arr[i] = rand() % 20 - 10;
		cout << arr[i] << setw(4);
	}
	//������ ������ ����������
	int* parr[size];
	//���������� �������� ����������
	for (int i = 0; i < M; i++) {
		parr[i] = &arr[i];
	}
	//���������� ������������� ���������
	int count = 0;
	cout << endl;
	for (int i = 0; i < M;i++) {
		if (*parr[i] < 0) {
			count++;
		}
	}
	cout << "���������� ������������� ���������:" << count << endl;
	//����� ������������� ��������� 
	int sum = 0;
	for (int i = 0; i < M;i++) {
		if (*parr[i] < 0) {
			sum += *parr[i];
		}
	}
	cout << "����� ������������� ���������:" << sum << endl;
	
}
void Pointertopointer() {
	const int size = 10000;
	int M;
	cout << "�� ������� ��������� �������� ������(�� ������ 10000)" << endl;
	cin >> M;
	int arr[size];
	//���������� �������
	cout << "��� ��������� ������" << endl;
	for (int i = 0; i < M;i++) {
		arr[i] = rand() % 20 - 10;
		cout << arr[i] << setw(4);
	}
	int* p[size];
	//�������������
	for (int i = 0; i < M; i++)
	{
		p[i] = &arr[i];
	}
	int** pp =p;
	//���������� ������������� ���������
	int count = 0;
	cout << endl;
	for (int i = 0; i < M;i++) {
		if (**pp<0) {
			count++;
		}
		*(++(*pp));
	}
	//
	cout << "���������� ������������� ���������:" << count << endl;
     //������� � ��������� ��������� ��������� �� ���������, �� ����� �����������
	for (int i = 0; i < M; i++)
	{
		p[i] = &arr[i];
	}
	pp = p;
	//����� ������������� ��������� 
	int sum = 0;
	for (int i = 0; i <M;i++) {
		if (**pp < 0) {
			sum += **pp;
		}
		*(++(*pp));
	}
	cout << "����� ������������� ���������:" << sum << endl;
}
void Parametr(int *arr, int M, int*sum, int *count) {
	//������� ����� � ����������
	for (int i = 0; i < M; i++) {
		if (arr[i] < 0) {
			*count+=1;
			*sum += arr[i];
		}
	}
}