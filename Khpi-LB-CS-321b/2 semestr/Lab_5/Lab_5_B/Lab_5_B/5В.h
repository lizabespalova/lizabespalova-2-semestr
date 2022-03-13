#pragma once
#include <iostream>
#include <iomanip>
#include <Windows.h>
#define DEBUG
using namespace std;
void Fill(int *A, int N);
int Summa(int *A, int N, int *sum, int *proizv);
int Proizvedenie(int* A, int N, int* sum, int *proizv);
int Function(int* A, int N,int* sum, int* proizv, int(*p)(int* A, int N, int *sum, int *proizv));