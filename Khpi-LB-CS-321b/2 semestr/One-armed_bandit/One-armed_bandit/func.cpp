#include "func.h"
void Rules() {
	system("cls");
	cout << "��� ������� ������ Enter ���������� �������� ���������" << endl;
	cout << "�� ������������ ���������� �� ������ �������� ����" << endl;
	cout << "� ������, ���� ��� ������ ������� ��� �������� ��� ��� ������" << endl;
	cout << "���� ��� ������ �������, �� ��������� 200 �����" << endl;
	cout << "���� ��� ������, �� 100" << endl;
	cout << "� ���� ������-0" << endl;
	cout << "� ��� ����� 3 ������� �������� �������� �� 1 ����" << endl;
	cout << "� ����� ���� �� ������� ������, ������� ������� �� ���������� ��������� �����" << endl;
	cout << "������� ����� � �����!)" << endl;
}
int Revolve(int arr[], int score) {
	for(int i=0; i<3;i++){
		int choose = rand() % N + 1;
		switch (choose) {
		case 1: {
			int x, y, w;
			srand(time(NULL));
			x = rand() % 10;
			x = x;
			y = x + 1;
			w = y + 1;
			arr[0] = x;
			arr[1] = y;
			arr[2] = w;
			cout << arr[0] << " " << arr[1] << " " << arr[2] << " \n �� ��������.\n";
			score += 100;
			cout << "� ��� " << score << " �����" << endl;
			break;
		}
		case 2: {
			int x;
			srand(time(NULL));
			x = rand() % 10;
			arr[0] = x;
			arr[1] = x;
			arr[2] = x;
			cout << arr[0] << " " << arr[1] << " " << arr[2] << " \n �� ��������.� ��� �������!\n";
			score += 200;
			cout << "� ��� " << score << " �����" << endl;
			break;
		}
		case 3: {
			int x, w;
			srand(time(NULL));
			x = rand() % 10;
			x = x;
			w = x + 1;
			arr[0] = x;
			arr[1] = x;
			arr[2] = w;
			cout << arr[0] << " " << arr[1] << " " << arr[2] << " \n �� ���������!\n";
			cout << "� ��� " << score << " �����" << endl;
			break;
		}
		case 4: {
			int x, y;
			srand(time(NULL));
			x = rand() % 10;
			x = x;
			y = x + 1;
			arr[0] = x;
			arr[1] = y;
			arr[2] = y;
			cout << arr[0] << " " << arr[1] << " " << arr[2] << " \n �� ���������!\n";
			cout << "� ��� " << score << " �����" << endl;
			break;
		}
		case 5: {
			int x, y;
			srand(time(NULL));
			x = rand() % 10;
			x = x;
			y = x + 1;
			arr[0] = x;
			arr[1] = y;
			arr[2] = x;
			cout << arr[0] << " " << arr[1] << " " << arr[2] << " \n �� ���������!\n";
			cout << "� ��� " << score << " �����" << endl;
			break;
	    	}
		}
  }
	return score;
}
void Result(int result) {
	cout << "� ��� " << result << " �����" << endl;
}