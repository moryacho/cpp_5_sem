// IdCard.h
#pragma once
#include <string>

using namespace std;

class IdCard
{
private:
    int number;
    string category;

public:
    IdCard(); // ����������� �� ���������
    IdCard(int n); // ����������� � �������
    IdCard(int n, string cat); // ����������� � ������� � ����������

    void setNumber(int newNumber);
    int getNumber();
    void setCategory(string cat);
    string getCategory();
};
