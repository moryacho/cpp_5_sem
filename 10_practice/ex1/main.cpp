// main.cpp
#include <iostream>
#include "IdCard.h"
#include "Student.h"

using namespace std;

int main() {
    // Создаем объект IdCard
    IdCard idc(123, "Базовый");

    // Запрашиваем данные о студенте
    string name, last_name;
    cout << "Введите имя студента: ";
    cin >> name;
    cout << "Введите фамилию студента: ";
    cin >> last_name;

    // Создаем объект Student
    Student* student02 = new Student(name, last_name, &idc);

    // Выводим данные о студенте
    cout << "IdCard: " << student02->getIdCard().getNumber() << endl;
    cout << "Category: " << student02->getIdCard().getCategory() << endl;

    // Освобождаем память
    delete student02;

    return 0;
}
