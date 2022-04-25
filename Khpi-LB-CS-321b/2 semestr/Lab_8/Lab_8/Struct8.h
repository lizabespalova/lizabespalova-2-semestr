#pragma once
#include <cstddef>
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
#define M 3
struct Data {
	char surname[15];
	char initials[5];
	char name = '¹';
	int numer;
	char in;
	char init;
	short birthdate;
	float salary;
	int mas[100];
	
};
struct List {
	
	Data information[100];
	List* next;
	
};

