#pragma once
#include <iostream>
#include <conio.h>
#include <iomanip>
#include <Windows.h>
#define M 3
#define N 5
using namespace std;
struct fruits {
	int apple;
	int lemon;
	int pear;
	int carrot;
	int strawberry;
	int beet;
};
void Rules();
int Revolve(int arr[], int score, int setansw);
void Result(int result);
int Settings(int setansw);
void Fruits();
