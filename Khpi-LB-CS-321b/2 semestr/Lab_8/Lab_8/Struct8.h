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
	/*List()
	{
		length =10;
		information = new Data[length];
	}
	*/
	/*int position;*/
	Data information[100];
	List* next;
	/*int length;
	int age;
	int count;*/
};

//int main()
//{
//	List* people = new List;
//	for (size_t i = 0; i < people->length; i++)
//	{
//		people->information = new Data;
//	}
//
//	int numberOfPosition = 3;
//	int usersNumber = 4;
//
//	if (people->count < people->length)
//	{
//		for (size_t i = numberOfPosition - 1; i < people->length - 1; i++)
//		{
//			people->information[i + 1] = people->information[i];
//		}
//		people->information[numberOfPosition] = usersNumber;
//	}
//	else
//	{
//		Data* copyOfInformation = new Data[people->length];
//		int copyOfLength = people->length;
//		for (size_t i = 0; i < people->length; i++)
//		{
//			copyOfInformation[i] = people->information[i];
//		}
//		people->information = new Data[copyOfLength+10];
//		people->length = copyOfLength + 10;
//		for (size_t i = 0; i < copyOfLength; i++)
//		{
//			people->information[i] = copyOfInformation[i];
//		}
//		delete[] copyOfInformation;
//		copyOfInformation = nullptr;
//		for (size_t i = numberOfPosition - 1; i < people->length - 1; i++)
//		{
//			people->information[i + 1] = people->information[i];
//		}
//		people->information[numberOfPosition] = usersNumber;
//	}
//
//}
