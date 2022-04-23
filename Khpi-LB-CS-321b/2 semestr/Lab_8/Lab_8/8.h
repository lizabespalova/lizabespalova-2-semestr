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
void Print(List*);
void Sort(List*);
void Destvie(List*);
void Add(List*);