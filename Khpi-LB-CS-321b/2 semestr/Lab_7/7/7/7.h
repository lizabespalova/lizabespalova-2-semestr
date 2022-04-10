#pragma once
#include "struct7.h"
#include <iostream>
#include <windows.h>
#include <iomanip>
#include <fstream>
//#define DEBUG
#pragma warning (disable: 4996)
#define M 3
#define PRINT_TYPE 2
using namespace std;
void Screen(Data mm[], int count, int schet);
void Random(Data mm[], int count, int schet);
void Print(Data mm[], int count, int schet);
void Sort(Data mm[], int count, int schet);
void Screen3(Data mm[], int count, int schet);
void Print3(Data mm[], int count, int schet);
void Sort3(Data mm[], int count, int schet);
void Screen4(Data mm[], int count, int schet);
void Print4(Data mm[], int count, int schet);
void Sort4(Data mm[], int count, int schet);
void Print5(Data mm[], int count, bool  schetchik_name, bool schetchik_surname, int schet);
void Print6(Data mm[], int count, bool  schetchik_name, bool schetchik_surname, int schet);
