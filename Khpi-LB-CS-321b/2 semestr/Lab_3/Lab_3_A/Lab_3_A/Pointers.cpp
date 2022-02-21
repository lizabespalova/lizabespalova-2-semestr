#include "Pointers.h"
void Otnositelniy(int *arr, int size) {
	//заполнение массива через относительный адрес
	cout << endl;
	cout << "Ваш начальный массив" << endl;
	for (int i = 0; i < size; i++) {
		*(arr + i) = rand() % 20 - 10;
		cout << *(arr + i)<<setw(4);
	}
	cout << endl;
	//количество отрицательных элементов
	int count=0;
	for (int i = 0; i < size;i++) {
		if (*(arr + i) < 0) {
			count++;
		}
	}
	cout << "Количество отрицательных элементов:" <<count<< endl;
	//сумма отрицательных элементов
	int sum = 0;
	for (int i = 0; i < size; i++) {
		if (*(arr + i) < 0) {
			sum += *(arr + i);
		}
	}
	cout << "Сумма отрицательных элементов:" << sum << endl;

}
void Absolutniy(int* arr, int size) {
	//запоминаем начало массива
	int* arr_start = arr;
	//заполнение массива при помощи абсолютной адресации
	cout << endl;
	cout << "Ваш начальный массив" << endl;
	for (int i = 0; i < size;i++) {
		*arr = rand() % 20 - 10;
		cout << *arr << setw(4);
		arr++;
	
	}
	//возврат указателя на начало
	arr = arr_start;
	//количество отрицательных элементов
	int count = 0;
	cout << endl;
	for (int i = 0;i < size;i++) {
		if (*arr < 0) {
			count++;
		}
		arr++;
	}
	cout << "Количество отрицательных элементов:" << count << endl;
	//возврат указателя на начало
	arr = arr_start;
	//сумма отрицательных элементов 
	int sum = 0;
	for (int i = 0; i < size;i++) {
		if (*arr < 0) {
			sum += *arr;
		}
		arr++;
	}
	cout << "Сумма отрицательных элементов:" << sum << endl;
	
}
void Noadres(int* arr, int size) {
	//запоминаем начало массива
	int* arr_start = arr;
	//заполнение массива без индексации
	cout << endl;
	cout << "Ваш начальный массив" << endl;
	for (;arr < arr_start + size;arr++) {
		*arr = rand() % 20 - 10;
		cout << *arr << setw(4);
	}
	//возврат указателя на начало
	arr = arr_start;
	//количество отрицательных элементов
	int count = 0;
	cout << endl;
	for (arr = arr_start;arr < arr_start + size;arr++) {
		if (*arr < 0) {
			count++;
		}
	}
	cout << "Количество отрицательных элементов:" << count << endl;
	//возврат указателя на начало
	arr = arr_start;
	//сумма отрицательных элементов 
	int sum = 0;
	for (arr = arr_start;arr < arr_start + size;arr++) {
		if (*arr < 0) {
			sum += *arr;
		}
	}
	cout << "Сумма отрицательных элементов:" << sum << endl;
	
}
void Maspoint() {
	const int size = 10000;
	int M;
	cout << "На сколько элементов создадим массив(не больше 10000)" << endl;
	cin >> M;
	int arr[size];
	//заполнение массива
	cout << "Ваш начальный массив" << endl;
	for (int i = 0; i < M;i++) {
		arr[i] = rand() % 20 - 10;
		cout << arr[i] << setw(4);
	}
	//делаем массив указателей
	int* parr[size];
	//заполнение массивом указателей
	for (int i = 0; i < M; i++) {
		parr[i] = &arr[i];
	}
	//количество отрицательных элементов
	int count = 0;
	cout << endl;
	for (int i = 0; i < M;i++) {
		if (*parr[i] < 0) {
			count++;
		}
	}
	cout << "Количество отрицательных элементов:" << count << endl;
	//сумма отрицательных элементов 
	int sum = 0;
	for (int i = 0; i < M;i++) {
		if (*parr[i] < 0) {
			sum += *parr[i];
		}
	}
	cout << "Сумма отрицательных элементов:" << sum << endl;
	
}
void Pointertopointer() {
	const int size = 10000;
	int M;
	cout << "На сколько элементов создадим массив(не больше 10000)" << endl;
	cin >> M;
	int arr[size];
	//заполнение массива
	cout << "Ваш начальный массив" << endl;
	for (int i = 0; i < M;i++) {
		arr[i] = rand() % 20 - 10;
		cout << arr[i] << setw(4);
	}
	int* p[size];
	//разиминование
	for (int i = 0; i < M; i++)
	{
		p[i] = &arr[i];
	}
	int** pp =p;
	//количество отрицательных элементов
	int count = 0;
	cout << endl;
	for (int i = 0; i < M;i++) {
		if (**pp<0) {
			count++;
		}
		*(++(*pp));
	}
	//
	cout << "Количество отрицательных элементов:" << count << endl;
     //вернули в начальное положение указатель на указатель, до этого разименовав
	for (int i = 0; i < M; i++)
	{
		p[i] = &arr[i];
	}
	pp = p;
	//сумма отрицательных элементов 
	int sum = 0;
	for (int i = 0; i <M;i++) {
		if (**pp < 0) {
			sum += **pp;
		}
		*(++(*pp));
	}
	cout << "Сумма отрицательных элементов:" << sum << endl;
}
void Parametr(int *arr, int M, int*sum, int *count) {
	//находим сумму и количество
	for (int i = 0; i < M; i++) {
		if (arr[i] < 0) {
			*count+=1;
			*sum += arr[i];
		}
	}
}