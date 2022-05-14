#pragma once

#include <iostream>
#include <windows.h>
#include<iomanip>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <fstream>
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
	List* prew;
};
