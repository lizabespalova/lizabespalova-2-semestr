#pragma once
struct Data {
	char surname[50]= "Иванов";
	char numeration;
	char (rand()% 26 + 0x61);
	short birthdate;
	float salary;
	int mas[10];
};
