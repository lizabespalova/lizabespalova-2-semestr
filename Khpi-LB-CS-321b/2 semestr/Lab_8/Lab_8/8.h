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
#define M 2
using namespace std;

struct List* Sozdaniespiskavvod(List*head);
struct List* Sozdaniespiskarand(List* head);
void Print(List*, bool insert);
void Sort(List*, bool insert);
void Destvie(List*);
void Add(List*);
void Delete(List*);
void Poisk(List*);
void Create_v_fail(List*);
void Sozdanie_s_fail(List*);