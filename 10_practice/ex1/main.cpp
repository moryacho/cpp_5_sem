// main.cpp
#include <iostream>
#include "IdCard.h"
#include "Student.h"

using namespace std;

int main() {
    // ������� ������ IdCard
    IdCard idc(123, "�������");

    // ����������� ������ � ��������
    string name, last_name;
    cout << "������� ��� ��������: ";
    cin >> name;
    cout << "������� ������� ��������: ";
    cin >> last_name;

    // ������� ������ Student
    Student* student02 = new Student(name, last_name, &idc);

    // ������� ������ � ��������
    cout << "IdCard: " << student02->getIdCard().getNumber() << endl;
    cout << "Category: " << student02->getIdCard().getCategory() << endl;

    // ����������� ������
    delete student02;

    return 0;
}
