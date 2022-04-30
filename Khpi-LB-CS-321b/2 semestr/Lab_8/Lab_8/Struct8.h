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
	char name = '¹';
	int numer;
	char in;
	char init;
	short birthdate;
	float salary;

	
};
struct List {
	
	Data information;
	List* next;
	
};

