// Task2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;


int main()
{
	//system("chcp 1251");
	cout.precision(3);
	//double a, b;

	//cout << "Введите a и b:\n";
	//cin >> a; // ввод с клавиатуры значения a
	//cin >> b; // ввод с клавиатуры значения b

	////double x = a / b; // вычисление значения x
	//int x = a / b; // вычисление значения x

	//cout << "\nx = " << x << endl; //вывод результата на экран
	//cout << "size a/b: " << sizeof(a / b) << endl;
	//cout << "size x: " << sizeof(x) << endl;

	system("chcp 1251");
	string name;
	cout << "Введите свое имя\n";
	double a, b;
	cout << "Введите a и b:\n";
	cin >> a;
	cin >> name;
	cin >> b;
	double x = a / b;
	cout << "\nx = " << x << endl;
	cout << "Привет, " << name << "!\n";

	return 0;
}


