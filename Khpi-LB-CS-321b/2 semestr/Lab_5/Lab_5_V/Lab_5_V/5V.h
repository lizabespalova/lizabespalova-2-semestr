#pragma once
#include <iostream>
#include <iomanip>
#include <windows.h>
#define DEBUG
using namespace std;
void Fill( int*A, int N);
int Pysirok(int*A, int N);
int Choara(int*A, int N);
int Gnom(int* A, int N);
int Function(int* A, int N, int(*p)(int* A, int N));