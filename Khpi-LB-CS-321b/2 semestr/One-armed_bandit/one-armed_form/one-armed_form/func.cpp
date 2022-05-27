#include "func.h"
using namespace System;
using namespace System::Windows::Forms;
void Rules() {
	system("cls");
	cout << "При нажатии кнопки Enter происходит вращение барабанов" << endl;
	cout << "За определенные комбинации вы будете получать очки" << endl;
	cout << "А именно, если все фрукты совпали или наоборот они все разные" << endl;
	cout << "Если все фрукты совпали, вы получаете 200 очков" << endl;
	cout << "Если все разные, то 100" << endl;
	cout << "В ином случае-0" << endl;
	cout << "У вас будет от 1 до 20 попыток вращения барабана за 1 игру(количество вы выбираете сами)" << endl;
	cout << "По умолчанию стоит 3 вращения" << endl;
	cout << "В конце игры вы олучите статус, который зависит от количества набранных очков" << endl;
	cout << "Хорошей иигры и удачи!)" << endl;
}
int Revolve(int arr[], int score, int setansw) {
	for(int i=0; i<setansw;i++){
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
			cout << arr[0] << " " << arr[1] << " " << arr[2] << " \n Вы выиграли.\n";
			score += 100;
			cout << "У вас " << score << " очков" << endl;
			break;
		}
		case 2: {
			int x;
			srand(time(NULL));
			x = rand() % 10;
			arr[0] = x;
			arr[1] = x;
			arr[2] = x;
			cout << arr[0] << " " << arr[1] << " " << arr[2] << " \n Вы выиграли.У Вас джекпот!\n";
			score += 200;
			cout << "У вас " << score << " очков" << endl;
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
			cout << arr[0] << " " << arr[1] << " " << arr[2] << " \n Вы проиграли!\n";
			cout << "У вас " << score << " очков" << endl;
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
			cout << arr[0] << " " << arr[1] << " " << arr[2] << " \n Вы проиграли!\n";
			cout << "У вас " << score << " очков" << endl;
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
			cout << arr[0] << " " << arr[1] << " " << arr[2] << " \n Вы проиграли!\n";
			cout << "У вас " << score << " очков" << endl;
			break;
	    	}
		}
  }
	return score;
}
void Result(int result) {
	cout << "У вас " << result << " очков" << endl;
}
int Settings(int setansw) {
	cout << "Введите количество вращений барабана(не меньше 1 и не больше 20)" << endl;
	cin >> setansw;
	if (setansw < 1 || setansw>20) {
		cout << "Слишком много/мало враений" << endl;
	}
	else
	return setansw;
}
void Fruits() {
	cout << "Выберите картинку" << endl;

}