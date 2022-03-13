#include "5Â.h"
void Fill(int *A, int N) {
	for (int i = 0; i < N;i++) {
		*(A + i) = rand() % 20 - 10;
	}
};
int Summa(int *A, int N,int* sum, int* proizv) {

	for (int i = 0; i < N; i++)
	{
		if (*(A + i) > 0) {
			*sum += *(A + i);
		}
	}
	return *sum;
};
int Proizvedenie(int* A, int N, int *sum, int *proizv) {
	for (int i = 0; i < N; i++)
	{
		if (*(A + i) < 0) {
			*proizv *= *(A + i);
		}
	}
	return *proizv;
};
int Function(int* A, int N, int* sum, int *proizv, int(*p)(int* A, int N, int *proizv, int* sum)) {
	return p (A, N, sum, proizv);
}