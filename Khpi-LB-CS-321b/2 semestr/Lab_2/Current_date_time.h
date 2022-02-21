#pragma once
#include "Struct.h"
//#define PRINT_TYPE(A) switch (A){case 1: Screen(Data mm[]); break;\
// case 2: Random(Data mm[]); break;}
#define DEBUG
#include <iostream>
#include <windows.h>
#pragma warning (disable: 4996)
#define M 3
#define PRINT_TYPE 2

using namespace std;
void Screen(Data mm[]);
void Random(Data mm[]);
void Print(Data mm[]);
void Sort(Data mm[]);