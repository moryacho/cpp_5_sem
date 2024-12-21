// Student.h
#pragma once
#include <string>
#include "IdCard.h"

using namespace std;

class Student {
private:
    string name;
    string last_name;
    IdCard* iCard; // ��������� �� ������ IdCard

public:
    Student(string name, string last_name, IdCard* id);

    void setIdCard(IdCard* c);
    IdCard getIdCard();

    // ������ ��� ��������� � ��������� �����
    void set_name(string name);
    string get_name();

    void set_last_name(string last_name);
    string get_last_name();
};
