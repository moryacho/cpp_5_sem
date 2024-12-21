// Task1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
	//system("chcp 1251");
	string name;
	cout << "What is your name? ";
	//cin >> name;
	getline(cin, name);
	cout << "Hello, " << name << "!\n";
}


