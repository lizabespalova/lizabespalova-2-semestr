// Lab_6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include"6.h"

int main(void) {
    setlocale(LC_ALL, "ru");
    system("chcp 1251");
    while (true) {
        int n;
        cout << "Введите количество символов строки" << endl;
        cin >> n;
        cin.get();  // пропускаем символ '\n' который остался от ввода n
        char* s1 =new char[n+1];
        char* s2=new char[n+1]; /* источник и результат */
        cout << "Введите строку" << endl;
        cin.getline(s1,n+1);
        Word(s1, s2);
        for (int i = 0; i < strlen(s2); i++) {
            cout << *(s2+i) ;
        }
        cout << endl;
        delete[]s1;
        delete[]s2;
    }
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
