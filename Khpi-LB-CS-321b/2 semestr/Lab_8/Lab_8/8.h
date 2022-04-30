#pragma once
#include "Struct8.h"
#include <iostream>
#include <windows.h>
#include<iomanip>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <fstream>
#define _CRT_SECURE_NO_WARNINGS
//#define DEBUG
#pragma warning (disable: 4996)
#define M 5
using namespace std;


struct List* Sozdaniespiskarand();
void Print(List*);
void Sort(List*);
void Insert(List*, int position);
void Delete(List*, int position);
void Poisk(List*);
void Create_v_fail(List*);
void Sozdanie_s_fail(List*);