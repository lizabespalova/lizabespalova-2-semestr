#include "struct9.h"
#pragma once
#include <iostream>
#include <windows.h>
#include<iomanip>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <fstream>


 
#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable: 4996)
#define M 5
using namespace std;
struct List* Sozdaniespiskarand(List*, List* );
void Print_s_nachalo(List*, List*);
void Sort(List*);
struct List*Insert(List* , int position, List*);
void Delete(List*, int position);
void Poisk_s_nachalo(List*);
void Create_v_fail(List*);
void Sozdanie_s_fail(List*);
void Print_s_konca(List*, List*);
void Poisk_s_konca(List*, List*tail);