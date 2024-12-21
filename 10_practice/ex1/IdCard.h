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
    IdCard(); // Конструктор по умолчанию
    IdCard(int n); // Конструктор с номером
    IdCard(int n, string cat); // Конструктор с номером и категорией

    void setNumber(int newNumber);
    int getNumber();
    void setCategory(string cat);
    string getCategory();
};
